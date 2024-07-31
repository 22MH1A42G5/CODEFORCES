#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k,cnt=1;
    cin>>n>>k;
    if(k==0){
        cout<<0<<endl;
        continue;
    }
    if(k<=n){
        cout<<1<<endl;
        continue;
    }
    k-=n;
    while(n>1 && k>0){
        k-=n-1;
        cnt++;
        if(k<=0)
            break;
        k-=n-1;
        cnt++;
        n-=1;
    }
    cout<<cnt<<endl;
  }
}