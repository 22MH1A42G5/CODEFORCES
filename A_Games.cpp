#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
    int n;
    cin>>n;
    int data;
    vector<int>v;
    vector<vector<int>>vd;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < 2 ; j++){
            cin>>data;
            v.pb(data);
        }
        vd.push_back(v);
        v.clear();
    }
    int ans=0;
    for(int k =0 ; k < n ; k++){
        for(int i = 0 ; i < n ; i++){
            if(vd[k][1]==vd[i][0]){
                ans++;
            }
        }
    }
    cout<<ans;
}