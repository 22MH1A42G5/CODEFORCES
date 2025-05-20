#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int j=2;
    int k = 1;
    if(n%2==1){
        cout<<-1;
        return 0;
    }

    for(int i = 1 ; i <= n ; i++){
        if(i%2==1){
            cout<<j<<" ";
            j+=2;
        }
        else{
            cout<<k<<" ";
            k+=2;
        }
    }
}