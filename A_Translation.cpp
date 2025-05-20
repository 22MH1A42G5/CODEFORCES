#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,st;
    cin>>s;
    cin>>st;
    reverse(st.begin() , st.end());
    // cout<<st;
    if( (s.compare(st))==0)
    cout<<"YES";
    else
    cout<<"NO";
    cout<<endl;
}