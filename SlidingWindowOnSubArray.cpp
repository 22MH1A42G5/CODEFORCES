#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    //cin>>n;
    vector<int>v={1,4,9,3,-1,0,8};
    vector<int>v1;
    vector<vector<int>>vd;
    int k=3;
    for(int i=0;i<k;i++){
        v1.push_back(v[i]);
    }
    vd.push_back(v1);
    cout<<endl;
    int i=1,j=k;
    while(j<v.size()){

        v1.push_back(v[j]);
        j++;
        v1.erase(v1.begin());
        vd.push_back(v1);
        //cout<<endl;
    }
    for(int i=0;i<vd.size();i++){
        for(int j=0;j<vd[0].size();j++){
            cout<<vd[i][j]<<" ";
        }
        cout<<endl;
    }
}