#include <bits/stdc++.h>
using namespace std;
int fun(int add , int skip , vector<int>&vec , int vertices){
    int fl = 0;
    int i = 0;
    int n = vec.size();
    int ans = 0;

    int te=add;
    while (te-- && i < n) {
        ans += vec[i];
        i++;
        vertices--;
    }
    i += skip;
    while(vertices > 0 && i < n) {
        ans += vec[i];
        i++;
    }
    while(i < n){
        int te = add;
        while(te-- && i < n){
            ans += vec[i];
            vertices--;
            if(vertices == 0) return ans;
            i++;
        }
        te = skip;
        while(te--){
            i++;
        }
    }
    return ans;
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int sz = (n*(n-1))/2;
	    vector<int>vec(sz);
	    int ans = INT_MAX;
	    for(int i = 0 ; i < sz ;i++){
	        cin >> vec[i];
	    }
        // cout << fun(2 , 1 , vec , 3) << " ";
	    for(int i = 2 ; i <= n ; i++){
	        int k = (i * (i-1))/2;
	        // ans = min(ans , fun(i-1 , k-(i-1),vec , n));
            ans = min(ans, fun(i - 1, k - (i - 1), vec, n - 1));
            // cout << i-1 << " " << k-(i-1) << "\n";
	        // cout << fun(i-1 , k-(i-1) , vec , n-1) << "\n";
	    }
	    cout << ans << "\n";
	}
}
