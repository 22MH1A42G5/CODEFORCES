#include<bits/stdc++.h>
using namespace std;
int main(){
    int m , n;
    cin>>m>>n;
    vector<vector<int>>ind;
    vector<int>tem;
    for(int i = 0; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            char data;
            cin>>data;
            if(data=='*'){
                ind.push_back({i,j});
            }
        }
        //for(int i = 0 ; i < tem.size(); i++)
    }
    //cout<<ind[0][0];
    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 2 ; j++){
    //         cout<<ind[i][j];
    //     }
    //     cout<<endl;
    // }
    map<int,int>mp,mp1;
    for(int i = 0 ; i < 3 ; i++){
        mp[ind[i][0]]++;
        mp1[ind[i][1]]++;
    }
    for(auto it: mp){
        if(it.second == 1){
            cout<<it.first+1<<" ";
        }
    }
    for(auto it:mp1){
        if(it.second == 1){
            cout<<it.first+1;
        }
    }
}