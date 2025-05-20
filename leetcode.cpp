#include<bits/stdc++.h>
using namespace std;
int valueAfterKSeconds(int n, int k) {
    vector<int>v,tem;
    for(int i = 0 ; i < n ; i++) 
    v.push_back(1);
    int s = 0;
    for(int i = 0 ; i < k ;i++){
        int s = 0;
        for(int j = 0 ; j < n ;j++){
            s+=(v[j]%((pow(10,9))+7));
            tem.push_back(s);
        }
        for(int k = 0 ; k < n ; k++){
            cout<<tem[k]<<" ";
        }
        cout<<endl;
        v=tem;
        tem.clear();
    }
    
    // for(int i = 0 ; i < n ; i++){
    //     cout<<v[i]<<" ";
    // }
    return v[v.size()-1];
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<valueAfterKSeconds(n,k);
}
// 0 1 2
