#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<char>alp,num;
        int te=0,cont=0;
        //cout<<"HI";
        for(int i = 0 ; i < s.size() ; i++){
            //cout<<i;
            if(s[i] >= 'a' && s[i] <= 'z'){
                te = 1;
                //cout<<"HI";
            }
            //cout<<te<<" ";
            if(s[i]>='0' && s[i]<='9'){
                if(te==1){
                    cout<<"NO"<<endl;
                    cont=1;
                    break;
                }
            }
        }
        //cout<<s<<endl;
        //cout<<cont;
        if(cont == 1){
            continue;
        }
        //cout<<"HI";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                alp.push_back(s[i]);
            }
            if(s[i]>='0' && s[i]<='9'){
                num.push_back(s[i]);
            }
            //cout<<s[i]<<" ";
        }
        vector<char>temp=alp,temp1=num;
        sort(temp.begin(),temp.end());
        sort(temp1.begin(),temp1.end());
        if(temp != alp){
            cout<<"NO"<<endl;
            continue;
        }
        if(temp1 != num){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
}