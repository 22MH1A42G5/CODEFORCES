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
    ll n;
    cin >> n;
    ll ans = 0;
    if(n >= 100){
        ans = n/100;
    }
    n = n%100;
    if(n >= 20){
        ans += n/20;
    }
    n = n%20;
    if(n >= 10){
        ans += n/10;
    }
    // cout << ans<< " " << n << " ";
    n = n%10;
    if(n >= 5){
        ans += n/5;
    }
    n = n%5;
    if(n >= 1){
        ans += n;
    }
    cout << ans << "\n";

}
