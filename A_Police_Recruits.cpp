#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,data,sum = 0,ans = 0;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>data;
        if(sum == 0 && data == -1){
            ans++;
        }
        else
        sum+=data;
    }
    cout<<ans;
}