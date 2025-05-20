#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,st;
    cin>>b>>a>>st;
    int a1=0,b1=0;
    // cout<<__gcd(9,3);
    while(st>=0){
        // cout<<st<<" ";
        if(a1==0){
            st-=__gcd(b,st);
            if(st<0){
                cout<<"1";
                return 0;
            }
            a1=1;
        }
        else{
            st-=__gcd(a,st);
            if(st<0){
                cout<<"0";
                return 0;
            }
            a1 = 0;
        }

    }
}