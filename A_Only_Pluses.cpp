#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        for(int i = 0 ; i < 5 ; i++){
            sort(v.begin(),v.end());
            v[0]++;
        }
        cout<<v[0]*v[1]*v[2]<<endl;
    }
}