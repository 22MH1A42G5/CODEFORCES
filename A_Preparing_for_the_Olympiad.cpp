#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>mon(n),ster(n);
        for(int i = 0 ; i < n ; i++){
            cin>>mon[i];
        }
        for(int i = 0 ;i < n ; i++)
            cin>>ster[i];
        int m = 0 , s = 0;
        for(int i = 0 ; i < n-1 ;i++){
            if(mon[i] > ster[i+1]){
                m += mon[i];
                s += ster[i+1];
            }
        }
        cout<<m+mon[n-1]-s<<endl;
    }
}