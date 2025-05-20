#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int data;
        vector<int>vec;
        int maxi = 0;
        for(int i = 0 ; i < n ; i++){
            cin>>data;
            // maxi = max(maxi , data);
            vec.push_back(data);
        }
        for(int i = 0 ; i < n-1 ; i++){
            // cout<<vec[i]<<" ";
            maxi = max(maxi , vec[i]);
        }
        cout<<maxi+vec[n-1]<<endl;
    }
}