#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll a , ll b){
    if(a % 2 == 1 && b % 2 == 1){
        return ((a*b)+1);
    }
    else if(a % 2 == 0 && b % 2 == 0){
        ll te = b/2;
        return (te*a + 2) % 2 == 0?te*a+2:-1;
    }
    else if(a % 2 == 1 && b % 2 == 0){
        ll te = b/2;
        return (te*a + b/te) % 2 == 0?te*a+2:-1;
    }
    else{
        return -1;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a , b;
        cin >> a >> b;
        cout << solve(a , b) << "\n";
    }
}

// 6 34
// 6*17 + 2
// 104
