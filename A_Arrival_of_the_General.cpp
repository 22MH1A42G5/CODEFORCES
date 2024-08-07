#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        cin>>c;
        nums.push_back(c);
    }
    int mxind=0,mnind=0,mx=0,mn=99999;
    for(int i=0;i<n;i++){
        if(mx<nums[i]){
            mx=nums[i];
            mxind=i;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(mn>nums[i]){
            mn=nums[i];
            mnind=i;
        }
    }
    if(mxind>mnind){
        cout<<mxind-mnind+n-2<<endl;
    }
    else{
        cout<<mxind+n-mnind-1<<endl;
    }
}