#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,data;
        cin>>n;
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            cin>>data;
            v.push_back(data);
        }
        map<int,pair<int,int>>mp;
        for(int i = 0 ; i < n ; i++){
            mp[v[i]].first++;
            mp[v[i]].second=i+1;
        }
        for(auto it:mp){
            if(mp[it.first].first == 1){
                cout<<mp[it.first].second<<endl;
            }
        }
    }
}