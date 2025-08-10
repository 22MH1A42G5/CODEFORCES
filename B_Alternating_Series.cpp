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
        if(n % 2 == 0){
            for(int i = 0 ;i < (n/2) - 1 ; i++){
                cout << -1 << " " << 3 << " ";
            }
            cout << -1 << " " << 2 << "\n";
        }
        else{
            for(int i = 0 ; i < n/2 ; i++){
                cout << -1 << " " << 3 << " ";
            }
            cout << -1 << "\n";
        }
        // if(n == 3){
        //     cout << -1 << " " << 3 << " " << -1 <<"\n";
        //     continue;
        // }
        // for(int i = 1 ; i <= n ; i++){
        //     if(i % 2)
        //     cout << -1 << " ";
        //     else cout << 2 << " ";
        // }
        // cout << "\n";
    }
}