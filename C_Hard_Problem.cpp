#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        int ans = 0;
        cin>>m>>a>>b>>c;
        int r1 = m , r2 = m;
        if(r1 >= a){
            r1 -= a;
            ans+=a;
        }
        else{
            ans += r1;
            r1=0;
        }
        // cout<<r1<<" ";
        if(r2 >= b){
            r2 -= b;
            ans += b;
        }
        else{
            ans += r2;
            r2 = 0;
        }
        if(r1+r2 >= c){
            ans += c;
        }
        else{
            ans += r1+r2;
        }
        cout<<ans<<endl;
    }
}