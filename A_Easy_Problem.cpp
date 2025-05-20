#include<bits/stdc++.h>
using namespace std;
int cube(int n){
    map<int,int>mp;
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j < n ; j++){
            mp[i] = n-j;
        }
    }
    return mp.size();
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<cube(n)<<endl;
    }
}