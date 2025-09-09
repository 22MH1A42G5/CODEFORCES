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

ll func(vector<int>vec){
    ll foa = 0;
    for(int i = 0 ; i < vec.size() ;i++){
        if( (i) % 2 == 1){
            foa -= vec[i];
        }
        else{
            foa += vec[i];
        }
    }
    return foa;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        fur(i , n) cin >> vec[i];
        int omaxi = 0 , emini = INT_MAX;
        ll foa = func(vec);
        fur(i , n){
            if( (i) % 2 == 1){
                omaxi = max(omaxi , vec[i]);
            }
            else{
                emini = min(emini , vec[i]);
            }
        }
        int fl = 0 , l , r;
        for(int i = 0 ; i < n ; i++){
            if(vec[i] == emini && fl == 0){
                l = i;
                fl = 1;
            }
            if(vec[i] == omaxi){
                r = i;
            }
        }
        // if()
        swap(vec[l] , vec[r]);
        // fur(i , n) cout << vec[i] << " ";
        // cout << "\n";
        foa = func(vec);
        // cout << l << " " << r << "\n";
        cout << (r-l) + foa << "\n";
        // cout << omaxi << " " << emini << "\n";
    }
}