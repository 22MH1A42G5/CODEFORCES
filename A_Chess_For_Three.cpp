    #include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
     
    ll mod = 1e9 + 7;
     
    void solve(){
        
        int p1,p2,p3;cin>>p1>>p2>>p3;
        
        int sum = (p1+p2+p3);
        if(sum%2 == 1) {
            cout<< -1 << endl;
            return;
        }
     
        int ans = min(sum/2, p1+p2);
     
        cout << ans << endl;
     
    }
     
    int main(){
        ll t;cin>>t;
        while(t--) {
          solve();
        }
     
        // solve();
        return 0;
    }