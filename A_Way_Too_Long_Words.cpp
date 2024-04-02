#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()<=10){
            cout<<s<<endl;
        }
        else{
            int te=s.size()-2;
            cout<<s[0]<<te<<s[s.size()-1]<<endl;
        }
    }
}