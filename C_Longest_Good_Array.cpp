#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int l , r;
        cin >> l >> r;
        int i = l;
        int add = 1;
        vector<int>vec;
        while(i <= r){
            vec.push_back(i);
            i += add;
            add++;
        }
        // for(int i = 0 ; i < vec.size() ; i++){
        //     cout << vec[i] << " ";
        // }
        cout << vec.size() << "\n";
    }
}