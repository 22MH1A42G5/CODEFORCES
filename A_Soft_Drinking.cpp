#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , k , l , c , d , p , nl , np;
    cin>>n >> k >> l >> c >> d >> p >> nl >> np;
    int mls = (k * l)/nl;
    int lit = (c*d);
    int slt = p / np;
    int ans = min(mls, min(lit , slt))/n;
    cout<<ans;

}