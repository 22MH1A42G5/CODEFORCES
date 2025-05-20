#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n;
        vector<int>vec;
        for(int i = 0 ; i < n ; i++){
            cin>>d;
            vec.push_back(d);
        }
        int i;
        vector<int>ans;
        if(vec[0] != vec[1]){
            i=1;
            ans.push_back(vec[0]);
        }
        else
        i=0;
        for( ; i < n-1 ; i++){
            ans.push_back(vec[i+1]);
        }
        ans.push_back(vec[n-1]);
        for(int i = 0 ; i < ans.size() ; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}