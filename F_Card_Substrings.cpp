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

    
    //testing
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n , m;
    cin >> n >> m;
    string s1 , s2;
    cin >> s1 >>s2;
    vi vec(26 , 0),hash(26,0);
    fur(i , m) vec[s2[i]-'a']++;
    ll i = 0 , j = 0 , ans = 0;
    while(i < n){
        hash[s1[i] - 'a']++;
        while(j < n && hash[s1[i]-'a'] > vec[s1[i]-'a']){
            // if(i == 2)
            // cout << hash[s1[i] - 'a'] << " " << vec[s1[i] - 'a']<<"\n";
            hash[s1[j]-'a']--;
            j++;
        }
        // cout << j << " ";
        ll te = (i - j + 1);
        ans += te;
        // cout << ans << " ";
        i++;
    }
    cout << ans;
}