#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int g,a,b;
        cin>>g>>a>>b;
        if(g<=((a)+(b*2)))
        cout<<"Qualify";
        else
        cout<<"NotQualify";
        cout<<endl;
    }
}