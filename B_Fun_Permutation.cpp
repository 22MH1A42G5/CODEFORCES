#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int te;
        int it = 1;
        for(int i = 0 ; i < n ; i++){
            cin >> te;
            cout << n+1 - te << " ";
        }
        cout << "\n";
    }
}