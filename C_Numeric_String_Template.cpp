#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,d;
        cin>>n;
        vector<int>vec;
        map<int,vector<int>>mp;
        for(int i = 0 ; i < n ; i++){
            cin>>d;
            mp[d].push_back(i);
            vec.push_back(d);
        }
        cin>>m;
        vector<string>str;
        for(int i = 0 ; i < m ; i++){
            string s;
            cin>>s;
            str.push_back(s);
        }
        // for(auto it : mp){
        //     cout<<it.first<<" ";
        //     for(int i = 0 ; i < it.second.size() ; i++){
        //         cout<<it.second[i]<<" ";
        //     }
        //     cout<<endl;
        // }
        vector<vector<int>>dvec;
        for(int i = 0 ; i < vec.size() ; i++){
            if(mp[vec[i]].size() != 0){
                dvec.push_back(mp[vec[i]]);
            }
            mp[vec[i]].clear();
        }
        // for(int i = 0 ; i < dvec.size() ; i++){
        //     for(int j = 0 ; j < dvec[i].size() ; j++){
        //         cout<<dvec[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i = 0 ; i < str.size() ; i++){
            vector<char>temp;
            map<char,int>mpp;
            for(int j = 0; j < str[i].size() ; j++ ){
                if(mpp[str[i][j]] != 1){
                    temp.push_back(str[i][j]);
                    mpp[str[i][j]] = 1;
                }
            }
            for(int j = 0 ; j < temp.size() ; j++){
                
            }
        }

    }
}