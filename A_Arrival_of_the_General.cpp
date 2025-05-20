#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i = 0 ; i < n ; i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
    int min = INT_MAX;
    int max = 0;
    int mini,maxi;
    for(int i = 0 ; i < n ; i++){
        if(min >= v[i]){
            min = v[i];
            mini = i;
        }
    }
    for(int i = n-1 ; i >= 0 ; i--){
        if(max <= v[i]){
            max = v[i];
            maxi = i;
        }
    }
    // cout<<mini<<" "<<maxi<<endl;
    if(mini > maxi){
        cout<<maxi+(n-mini-1)<<endl;
    }
    else
    cout<<maxi+(n-mini-1)-1<<endl;
}