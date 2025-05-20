#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int>v;
    cin>>n;
    int data;
    map<int,int>mp;
    for(int i = 0 ; i < n ; i++){
        cin>>data;
        mp[data]=i+1;
    }
    for(auto it: mp){
        cout<<it.second<<" ";
    }
    cout<<endl;
    
}