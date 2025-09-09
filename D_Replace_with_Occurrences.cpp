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
        int sz = 0;
        for(int i = 0 ;i < n ; i++) cin >> vec[i];
        map<int,int>mpp;
        for(int i = 0 ; i < vec.size() ; i++){
            mpp[vec[i]]++;
        }
        int fl = 0;
        int tot = 0;
        vector<pair<int,int>>pvec;
        for(auto it:mpp){
            // cout << it.first << " " << it.second << "\n";
            if(it.second % it.first != 0){
                fl = 1;
            }
            pvec.push_back({it.second / it.first , it.first});
        }
        if(fl == 1){
            cout << -1 << "\n";
            continue;
        }
        int ans = 1;
        int nums =  1;
        for(int i = 0 ; i < pvec.size(); i++){
            for(int j = 0 ; j < pvec[i].first ; j++){
                for(int k = 0 ; k < pvec[i].second  ;k++){
                    cout << nums << " ";
                }
                nums++;
            }
        }
        // for(int i = 0 ; i < n ;i++){
        //     cout << mpp[vec[i]] << " ";
        // }
        cout << "\n";

    }
}


// 4 5 7 7 3 5 7 8

// 4 5 7 7 3 5 7 8


// 1
// 1 2 
// -1
// -1
// 1 1 
// 1 2 3 
// -1
// -1
// -1
// 1 2 2 
// -1
// -1
// -1
// -1

