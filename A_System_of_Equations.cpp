#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int ma = max(m,n);
    int cnt = 0;
    if(m == 1 && n == 1){
        cout<<2;
        return 0;
    }
    for(int a = 0 ; a < ma ; a++){
        for(int b = 0 ; b < ma ; b++){
            if((a*a == n - b) && (b*b == m - a)){
                cnt++;
            }
        }
    }
    cout<<cnt;
}