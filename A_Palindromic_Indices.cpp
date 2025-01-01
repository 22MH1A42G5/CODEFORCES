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
int PalIndices(string s){
    int n = s.size();
    int j = n/2;
    // cout<<n<<" ";
    int i = j;
    int cnt = 0;
    while(i >= 0 && s[i] == s[j]){
        i--;
        cnt++;
    }
    i = j;
    while(i < n && s[i] == s[j]){
        // cout<<i<<" ";
        cnt++;
        i++;
    }
    if(n % 2 == 0)
    return cnt - 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        cout<<PalIndices(s)<<"\n";
    }
}
// 11
// aetec