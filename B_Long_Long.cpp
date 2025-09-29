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
    int t;
    cin >>t ;
    while(t--){
        long long n , d , ans = 0;
        cin >> n;
        vector<long long>vec;
        for(int i = 0 ; i < n ;i++){
            cin >> d;
            if(d != 0){
                vec.push_back(d);
                if(d < 0){
                    ans += (-1) * d;
                }
                else ans += d;
            }
        }
        if(vec.empty()){
            cout << 0 << " " << 0 << "\n";
            continue;
        }
        // fur(i , n) cout << vec[i] << " ";
        long long cnt = 0;
        for(int i = 0 ; i < vec.size()-1 ; i++){
            if(vec[i+1] > 0 && vec[i] < 0){
                cnt++;
            }
        }
        if(vec[vec.size()-1] < 0){
            cnt++;
        }
        cout << ans << " " << cnt << "\n";
    }
}