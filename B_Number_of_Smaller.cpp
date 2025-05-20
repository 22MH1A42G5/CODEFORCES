#include<bits/stdc++.h>
#define vi vector<ll>
#define ll long long
#define ld long double
#define pb push_back
#define f first
#define s second
#define ALL(x) begin(x), end(x)
#define fur(i, n) for (int i = 0; i < n; i++) 
#define rev(x) reverse(x.begin(), x.end());
#define sort(x) sort(x.begin(), x.end())
#define rsort(x) sort(x.rbegin(), x.rend())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n , m;
    cin >> n >> m;
    vector<int>a(n) , b(m);
    fur(i , n) cin >> a[i];
    fur(i , m) cin >> b[i];
    int i = 0;
    int j = 0;
    while(i < n && j < m){
        while(b[j] > a[i]){
            i++;
        }
        if(i >= n)
        cout << n << " ";
        else
        cout << i << " ";
        j++;
    }
    while(j < m){
        cout << n << " ";
        j++;
    }
}