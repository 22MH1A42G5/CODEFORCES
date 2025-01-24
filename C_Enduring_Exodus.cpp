#include<bits/stdc++.h>
#define vl vector<ll>
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
    ll n , k;
    cin>>n>>k;
    string s;
    cin>>s;
    vl zind;
    fur(i , n){
        if(s[i] == '0')
        zind.push_back(i+1);
    }
    ll m = zind.size();
    // fur(i , m) cout<<zind[i]<<" ";
    ll left = 0 , right = k , far = 0;
    ll ans=INT_MAX ,res , fl = 0,res1;
    while(left < m-k){
        while(far+1 <= right){        
            res = max(zind[far] - zind[left] , zind[right] - zind[far]);
            res1 = max(zind[far+1] - zind[left] , zind[right] - zind[far]);
            ans = min(res,min(ans,res1));
            if(res < res1)
            break;
            far++;
        }
        right++;
        left++;
    }
    cout<<ans;

}