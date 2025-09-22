#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        // vector<int>vec(n);
        int data;
        unordered_map<int,int>mpp;
        for(int i = 0 ; i < n ;i++){
            cin >> data;
            mpp[data]++;
        }
        int maxi = INT_MIN;
        for(auto it:mpp){
            maxi = max(it.second , maxi);
        }
        cout << n - maxi << "\n";
    }
}