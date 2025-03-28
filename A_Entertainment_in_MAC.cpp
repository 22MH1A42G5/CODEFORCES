#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int f;
        string s;
        cin>>f;
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
