#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int data,ans = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>data;
        if(data == 1)
        ans = 1;
    }
    if(ans==1)
    cout<<"HARD";
    else
    cout<<"EASY";
}