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
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vi vec(n);
        fur(i , n) cin >> vec[i];
        vi pref(n , 0) , suf(n , 0);
        pref[0] = vec[0];
        suf[n-1] = vec[n-1];
        for(int i = 1 ; i < n ; i++){
            pref[i] = min(pref[i-1] , vec[i]);
        }
        for(int i = n-2 ; i >= 0 ; i--){
            suf[i] = max(suf[i+1],vec[i]);
        }
        string ans = "";
        fur(i , n){
            if(pref[i] == vec[i] || suf[i] == vec[i]){
                ans = ans + "1";
            }
            else{
                ans = ans + "0";
            }
        }
        cout << ans << "\n";
        
    }
}