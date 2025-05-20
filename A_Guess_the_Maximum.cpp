#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            int data;
            cin>>data;
            v.push_back(data);
        }
        int mini = INT_MAX;
        for(int i = 0 ; i < n-1 ; i++){
            int maxi = max(v[i],v[i+1]);
            if(mini > maxi){
                mini = maxi;
            }
        }
        cout<<mini-1<<endl;
    }
}