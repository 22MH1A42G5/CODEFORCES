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
string Template(string &a , string &b , string &c){
    for(int i = 0 ; i < a.size() ; i++){
        if(a[i] != c[i] && b[i] != c[i])
        return "YES";
    }
    return "NO";
}
int main(){
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        cout<<Template(a,b,c)<<"\n";
     }
}