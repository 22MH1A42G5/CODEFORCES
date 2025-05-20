#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a>>b>>c;
    map<char , int>mp,mp1;
    for(int i = 0 ; i < a.size() ; i++){
        mp[a[i]]++;
    }
    for(int i = 0 ; i < b.size() ; i++){
        mp[b[i]]++;
    }
    for(int i = 0 ; i < c.size() ; i++){
        mp1[c[i]]++;
    }
    if(mp==mp1)
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
}