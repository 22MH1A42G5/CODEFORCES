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
    ll n,k;
    cin>>n>>k;
    vi vec(n);
    fur(i , n) cin>>vec[i];
    // fur(i , n) cout << vec[i] << " ";
    ll i = 0 , j = 0 , s = 0 , ans = 0;
    while(j < n){
        s += vec[j];
        while(s > k && i < n){
            s -= vec[i];
            i++;
        }
        ll te = (j-i+1);
        ans += (te*(te+1))/2;
        j++;
    }
    cout << ans ;
}

// 10
// 16+16+10

// 4 4 3 
// 4
// 16 + 16 + 
// 32 + 6
// 10 + 10 + 6
// 26
// 20
// 2 6 4 3 6 8 9
// 2 6 4 3 6
//   6 4 3 6
//   6 4 3 6 8
//     4 3 6 8
//       3 6 8
//       3 6 8 9
//         6 8 9

// 4 + 1 + 4 + 3
// 2 6 4 3 6
// 2 6 4

// 2 6