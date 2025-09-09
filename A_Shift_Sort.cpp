#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int z = 0;
        for(int i = 0 ;i < n ;i++){
            if(s[i] == '0')
                z++;
        }
        int ans = 0;
        for(int i = z ; i < n ; i++){
            if(s[i] == '0')
            ans++;
        }
        cout << ans << "\n";

    }
}