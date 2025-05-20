#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int mini = INT_MAX;
        int c = a;
        while( c <= b){
            int te = (c - a)+( b - c);
            if(mini > te)
            mini = te;
            c++;
        }
        cout<<mini<<endl;
    }
}