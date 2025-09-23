#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int,string>>pvec;
        string st;
        int d;
        for(int i = 0 ;i < n ;i++){
            cin >> d;
            cin >> st;
            pvec.push_back({d,st});
        }
        int ft = INT_MAX , lt = INT_MAX , bt = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            if(pvec[i].second[0] == '1'){
                ft = min(ft , pvec[i].first);
            }
            if(pvec[i].second[1] == '1'){
                lt = min(lt , pvec[i].first);
            }
            if(pvec[i].second[0] == '1' && pvec[i].second[1] == '1'){
                bt = min(bt , pvec[i].first);
            }
        }
        if(ft == INT_MAX || lt == INT_MAX){
            cout << -1 << "\n";
        }
        else{
            cout << min(bt , ft + lt) << "\n";
        }
    }
}