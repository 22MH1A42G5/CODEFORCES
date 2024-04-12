#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int fl = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]=='i' && s[i+1]=='t'){
                fl=1;
            }
        }
        if(fl==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}