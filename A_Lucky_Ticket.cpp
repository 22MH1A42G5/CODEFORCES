#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n>>s;
    for(int i = 0 ; i < n ; i++){
        if(s[i]!='4' && s[i]!='7'){
            //Eat Fivestar
            cout<<"NO";
            return 0;
        }
    }
    // cout<<"HI";
    int s1 = 0 , s2 = 0;
    for(int i = 0 ; i < n ; i++){
        if(i < n/2){
            if(s[i]=='4')
            s1+=4;
            else
            s1+=7;
        }
        if(i>=n/2){
            if(s[i]=='4')
            s2+=4;
            else
            s2+=7;
        }
    }
    // cout<<s1<<" "<<s2<<endl;
    if(s1==s2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}