#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int te = 240-k;
    int s = 0,fl=0;
    // for(int i = 1 ; i <= n ; i++){
    //     s+=i*5;
    // }
    if(te==0)
    cout<<0<<endl;
    else{
        for(int i = 1 ; i <= n ; i++){
            if( (s+i*5) > te){
                cout<<i-1<<endl;
                fl=1;
                break;
            }
            s+=i*5;
            // cout<<s<<" ";
        }
        if(fl==0){
            cout<<n<<endl;
        }
    }
}