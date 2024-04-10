#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,re;
    cin>>n>>re;
    int temp = n;
    for(int i = 1 ; i <= 10 ; i++){
        //cout<<n<<endl;
        if(n%10==0){
            cout<<i<<endl;
            break;
        }
        else if(n%10==re){
            cout<<i<<endl;
            break;
        }
        else{
            n+=temp;
        }
    }
}