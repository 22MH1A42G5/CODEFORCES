#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int m , n , d;
    cin >> m >> n;
    vector<int>vec(m);
    unordered_map<int,int>mpp;
    for(int i = 0 ;i < m ; i++){
        cin >> vec[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin >> d;
        mpp[d]++;
    }
    long long ans = 0;
    for(int i = 0 ;i < m ; i++){
        ans += mpp[vec[i]];
    }
    cout << ans;
}