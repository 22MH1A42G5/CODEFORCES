#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath> // For round()

// Fix for older compilers (disables C++17 <optional>)
#define NLOHMANN_JSON_HAS_OPTIONAL 0

// Now include the library
#include "json.hpp"

// Use the nlohmann namespace for convenience
using json = nlohmann::json;

// Define a type for our points. We use long double for y to handle large numbers.
using Point = std::pair<int, long double>;

/**
 * @brief Decodes a string representation of a number in a given base to a long double.
 */
long double string_to_long_double(const std::string& s, int base) {
    long double result = 0.0;
    for (char c : s) {
        int digit;
        if (c >= '0' && c <= '9') {
            digit = c - '0';
        } else if (c >= 'a' && c <= 'z') {
            digit = c - 'a' + 10;
        } else if (c >= 'A' && c <= 'Z') {
            digit = c - 'A' + 10;
        } else {
            continue; 
        }
        result = result * base + digit;
    }
    return result;
}

/**
 * @brief Calculates the constant term (f(0)) of a polynomial using Lagrange Interpolation.
 */
long long find_secret_c(const std::vector<Point>& points, int k) {
    long double secret_c = 0.0;
    for (int j = 0; j < k; ++j) {
        long double y_j = points[j].second;
        long double x_j = static_cast<long double>(points[j].first);

        long double lagrange_basis = 1.0;
        for (int m = 0; m < k; ++m) {
            if (m == j) continue;
            long double x_m = static_cast<long double>(points[m].first);
            lagrange_basis *= (-x_m) / (x_j - x_m);
        }
        secret_c += y_j * lagrange_basis;
    }
    return static_cast<long long>(round(secret_c));
}

/**
 * @brief Reads a JSON file, decodes points, and solves for the secret constant.
 */
void solve_from_file(const std::string& filename) {
    std::cout << "--- Processing File: " << filename << " ---" << std::endl;

    std::ifstream file_stream(filename);
    if (!file_stream.is_open()) {
        std::cerr << "Error: Could not open file '" << filename << "'" << std::endl;
        return;
    }

    json data;
    try {
        data = json::parse(file_stream);
    } catch (json::parse_error& e) {
        std::cerr << "Error: JSON parsing failed: " << e.what() << std::endl;
        return;
    }

    int k = data["keys"]["k"];
    std::vector<Point> points;

    // ===================================================================
    // THIS IS THE CORRECTED LOOP FOR OLDER COMPILERS
    // ===================================================================
    for (const auto& item : data.items()) {
        std::string key = item.key();
        const auto& value_obj = item.value();
    // ===================================================================

        if (key == "keys") continue;
        
        int x = std::stoi(key);
        int base = std::stoi(value_obj["base"].get<std::string>());
        std::string encoded_y = value_obj["value"].get<std::string>();
        long double y = string_to_long_double(encoded_y, base);
        points.push_back({x, y});
    }

    std::sort(points.begin(), points.end(), [](const Point& a, const Point& b) {
        return a.first < b.first;
    });

    std::cout << "Degree of polynomial (m): " << k - 1 << std::endl;
    std::cout << "Minimum points required (k): " << k << std::endl;
    std::cout << "Decoded points (using first " << k << "):" << std::endl;
    std::cout.precision(0); 
    for(size_t i = 0; i < std::min((size_t)k, points.size()); ++i) {
        std::cout << "  (x=" << points[i].first << ", y=" << std::fixed << points[i].second << ")" << std::endl;
    }

    long long secret_value = find_secret_c(points, k);
    std::cout << "\nResult: The calculated secret (constant 'c') is: " << secret_value << "\n" << std::endl;
}

int main() {
    // solve_from_file("input1.json");
    solve_from_file("input2.json");

    return 0;
}
