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
void immobile(int a ,int b){
    if(a == 1 || b == 1){
        cout<<a<<" "<<b<<"\n";
        return;
    }
    if(a <= 3 && b <= 3){
        cout<<2<<" "<<2<<"\n";
        return;
    }
    cout<<a<<" "<<b<<"\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        immobile(a , b);
    }
}