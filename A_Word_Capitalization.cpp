#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cin>>st;
    char t = st[0];
    if(t>=65 && t<=90)
    cout<<st[0];
    else{
        char st1 = st[0]-32;
        cout<<st1;
    }
    st.erase(st.begin());
    cout<<st;
}