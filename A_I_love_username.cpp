#define pb push_back
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int data;
    vector<int>v;
    for(int i = 0 ; i < n ; i++){
        cin>>data;
        v.pb(data);
    }
    int min = v[0];
    int max = v[0];
    int ans = 0;
    for(int i = 1 ; i < n ; i++){
        if(min > v[i]){
            min = v[i];
            ans++;
        }
        if(max < v[i]){
            max = v[i];
            ans++;
        }
    }
    cout<<ans;
}