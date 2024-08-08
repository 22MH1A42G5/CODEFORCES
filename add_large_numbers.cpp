#include<bits/stdc++.h>
using namespace std;
vector<int> add(vector<int>&A,vector<int>&B){
    int n=A.size(),i;
    int m=B.size();
    int mini=min(m,n);
    vector<int>C;
    int carry=0;
    for( i=0;i<mini;i++){
        int sum=A[i]+B[i]+carry;
        C.push_back(sum%10);
        carry=sum/10;
    }
    if(i<n){
        while(i<n){
            int sum=A[i]+carry;
            C.push_back(sum%10);
            carry=sum/10;
            i++;
        }
    }
    if(i<m){
        while(i<m){
            int sum=B[i]+carry;
            C.push_back(sum%10);
            carry=sum/10;
            i++;
        }
    }
    while(carry!=0){
        C.push_back(carry);
        carry=carry/10;
    }
    return C;
}
int main(){
    string a,b;
    int i;
    cin>>a;
    cin>>b;
    vector<int>A;
    for( i=0;i<a.length();i++){
        A.push_back(a[i]-'0');
    }
    vector<int>B;
    for(i=0;i<b.length();i++){               
        B.push_back(b[i]-'0');                
    }
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    vector<int>C=add(A,B);
    reverse(C.begin(),C.end());
    for(i=0;i<C.size();i++){
        cout<<C[i];
    }
}