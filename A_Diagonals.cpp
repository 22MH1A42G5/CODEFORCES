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
int Diagonals(int n , int k){
    if(k == 0)
    return 0;
    if(k <= n)
    return 1;
    int i = n-1;
    int cnt = 0,ans = 0;
    k-=n;
    while( k > 0){
        k -= i;
        cnt++;
        if(cnt == 2){
            cnt = 0;
            i--;
        }
        ans++;
    }
    return ans+1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<Diagonals(n , k)<<"\n";
    }
}