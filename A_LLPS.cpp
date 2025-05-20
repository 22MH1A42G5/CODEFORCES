#include<bits/stdc++.h>
using namespace std;
void subseq(vector<string>&v , string s , vector<char> ans ,int index, int size){
    if(index >= size){
        string st = "";
        for(int i = 0 ; i < ans.size() ; i++){
            st+=ans[i];
        }
        v.push_back(st);
        return;
    }
    ans.push_back(s[index]);
    subseq(v , s , ans , index+1 , size);
    ans.pop_back();
    subseq(v , s , ans , index+1 , size);
}
int main(){
    string s;
    cin>>s;
    vector<string>v;
    vector<string>rv,ans;
    subseq(v,s,{},0,s.size());
    // for(int i = 0 ; i < v.size() ; i++){
    //     cout<<v[i]<<" ";
    // }
    rv=v;
    for(int i = 0 ; i < v.size() ; i++){
        reverse(rv[i].begin(), rv[i].end());
    }
    cout<<endl;
    // for(int i = 0; i < rv.size() ; i++){
    //     cout<<rv[i]<<" ";
    // }
    for(int i = 0 ; i < rv.size() ; i++){
        if(rv[i]==v[i]){
            ans.push_back(rv[i]);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans[ans.size()-1];
}