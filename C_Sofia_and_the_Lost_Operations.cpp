#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, dn, c,sz=0;
        cin >> n;
        
        map<int, int> temp,ch;
        vector<int> found(n), original(n);
        for (int i = 0; i < n; i++) {
            cin >> found[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> original[i];
            if (found[i] != original[i]) {
                ch[original[i]]++;
                sz++;
            }
            temp[original[i]]++;
        }
        cin >> dn;
        vector<int> d(dn);
        
        for (int i = 0; i < dn; i++) {
            cin >> d[i];
        }
        
        int j=0;
        c=0;
        for(int i=0;i<dn && j<ch.size();i++){

            if(ch[d[i]]!=0){
                ch[d[i]]--;
                sz--;
                c=0;
            }
            else if(temp[d[i]]!=0){
                c=0;
            }
            else{
                c++;
            }
        }
        if(c!=0 || sz!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
