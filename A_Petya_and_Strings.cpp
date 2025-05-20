#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,a1="",a2="";
    cin>>s1>>s2;
    for(int i = 0 ; i < s1.size() ; i++){
        if(s1[i]>='A' && s1[i]<='Z'){        
            int te = s1[i];
            char st = te + 32;
            a1+=st;
        }
        else
        a1+=s1[i];
    }
    for(int i = 0 ; i < s2.size() ; i++){
        if(s2[i]>='A' && s2[i]<='Z'){        
            int te = s2[i];
            char st = te + 32;
            a2+=st;
        }
        else
        a2+=s2[i];
    }
    // sort(a1.begin(),a1.end());
    // sort(a2.begin(),a2.end());
    if(a1<a2)
    cout<<-1;
    else if(a2<a1)
    cout<<1;
    else
    cout<<0;
}