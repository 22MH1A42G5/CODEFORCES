#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        int ans  = 0, data;
        for(int i = 0 ; i < n ; i++){
            cin >> data;
            if(data < 0){
                ans += (data)*-1;
            }
            else ans+=data;
        }
        cout << ans << "\n";

    }
}