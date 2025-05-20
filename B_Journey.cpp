#include<bits/stdc++.h>
using namespace std;
#define ll long long
int journey(ll te,ll ans,ll a , ll b , ll c){
    if( te > 0){
        ans += 1;
        te -= a;
    }
    if(te > 0){
        ans += 1;
        te -= b;
    }
    if(te > 0){
        ans += 1;
        te -= c;
    }
    if(te > 0){
        ans++;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,a,b,c;
        cin>>n>>a>>b>>c;
        ll s = a+b+c;
        ll ans = n/s;
        ll te = n % s;
        ans = ans * 3;
        cout<<journey(te , ans,a,b,c)<<endl;
    }
}