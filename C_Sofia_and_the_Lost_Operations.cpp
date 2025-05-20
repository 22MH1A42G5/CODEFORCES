#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        vector<long long>a,b,d,te;
        map<long long , long long>mp;
        long long m,data,tem = 0;
        cin>>n;
        for(int i = 0 ;i < n ; i++){
            cin>>data;
            a.push_back(data);
        }
        for(int i = 0 ;i < n ; i++){
            cin>>data;
            b.push_back(data);
        }
        cin>>m;
        for(int i = 0 ; i < m ; i++){
            cin>>data;
            d.push_back(data);
        }
        for(int i = 0 ; i< n ; i++){
            if(a[i]!=b[i])
            te.push_back(b[i]);
        }
        for(int i = 0 ; i < m ; i++){
            mp[b[i]]++;
        }
        for(int i = 0 ; i < n ; i++){
            if(mp[b[i]]==0){
                tem = 1;
                cout<<"NO"<<endl;
                break;
            }else{
                mp[b[i]]--;
            }
        }
        if(tem!=1)
        cout<<"YES"<<endl;
    }
}