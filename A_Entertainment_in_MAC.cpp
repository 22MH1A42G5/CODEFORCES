#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int t;
        string s;
        cin>>t;
        cin>>s;
        string sr;
        sr=s;
        reverse(sr.begin(),sr.end());
        if(s <= sr){
            cout<<s<<endl;
        }
        else{
            sr+=s;
            cout<<sr<<endl;
        }
    }
}