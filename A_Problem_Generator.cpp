#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int m;
        cin>>n>>m;
        string s;
        cin>>s;
        string st = "ABCDEFG";
        map<char,int>mp;
        for(int i = 0 ; i < s.size() ; i++){
            mp[s[i]]++;
        }
        for(auto it: mp){
            // cout<<it.first<<" "<<it.second<<endl;
        }
        int ans = 0;
        for(auto it:mp){
            int te = it.second/m;
            if(te == 0){
                // cout<<m-it.second<<" ";
                ans+=m-it.second;
            }
        }
        cout<<((7-mp.size())*m)+ans<<endl;
    }
}