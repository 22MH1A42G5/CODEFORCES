#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,pos,data,ans = 0;
    cin>>n>>pos;
    vector<int> v;
    for(int i = 0 ; i < n ; i++){
        cin>>data;
        v.push_back(data);
    }
    for(int i = 0 ; i < n ; i++){
        if(v[i]>=v[pos-1] && v[i]>0){
            ans++;
        }
    }
    cout<<ans;
}