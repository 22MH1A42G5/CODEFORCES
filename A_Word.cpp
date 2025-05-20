#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int lc=0,uc = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i]>='a' && s[i] <= 'z')
        lc++;
        else
        uc++;
    }
    // cout<<lc<<" "<<uc<<endl;
    if(lc>=uc){
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]>='A' && s[i] <= 'Z'){
                int te = s[i];
                int te1 = te+32;
                char ch = te1;
                cout<<ch;
            }
            else
            cout<<s[i];
        }
    }
    else if(uc > lc){
        // char ch;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]>='a' && s[i] <= 'z'){
                int te = s[i];
                int te1 = te -32;
                char ch= te1;
                cout<<ch;
            }
            else
            cout<<s[i];
        }    
    }
}