#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s1,s2;
    cin>>s1>>s2;
    vector<int>cnt1(26,0);
    vector<int>cnt2(26,0);
    for(int i=0;i<s1.size();i++){
        cnt1[s1[i]-'a']++;
    }
    for(int i=0;i<s2.size();i++){
        cnt2[s2[i]-'a']++;
    }
    int ans=0;
    for(int i=0;i<26;i++){
        ans+=max(cnt1[i],cnt2[i]);
    }
    cout<<ans<<endl;
  }
}