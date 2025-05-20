#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long cnt = 0,re;
    while(n>0){
        re = n%10;
        if(re==4 || re == 7)
        cnt++;
        n/=10;
    }
    if(cnt==4 || cnt==7)
    cout<<"YES";
    else
    cout<<"NO";
}