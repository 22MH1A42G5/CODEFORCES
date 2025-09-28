#include<bits/stdc++.h>
using namespace std;
#define ll long long
int pref(int n , vector<int>& vec){
    map<int,int>mpp;
    int ans = 0;
    for(int i = n-1 ; i >= 0 ;  i--){
        if(mpp[vec[i]] == 0)
        mpp[vec[i]]++;
        else{
            return i+1;
        }
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        for(int i = 0 ;i < n ; i++) cin >> vec[i];
        cout << pref(n , vec) << "\n";
    }
}