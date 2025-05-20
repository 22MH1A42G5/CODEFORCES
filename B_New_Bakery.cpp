#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        if(a >= b){
            long long ans = n*a;
            cout<<ans<<endl;
        }
        else if(a < b){
            long long te = b-a;  
            if(te > n)
            te = n;
            long long tem = (b*(b+1))/2; 
            long long ne = b-te;
            // cout<<a<<" "<<ne<<endl;
            long long nes = (ne*(ne+1))/2;
            long long tot = tem-nes;
            long long ans = tot + ((n-te)*a); 
            cout<<ans<<endl;
        }
    }
}