#include<bits/stdc++.h>
using namespace std;
#define ll long long
string Solver(int n , int k , vector<int>vec){
    int num = vec[k-1];
    sort(vec.begin(),vec.end());
    // for(int i = 0 ; i < n ; i++) cout << vec[i] << " ";
    int ind;
    for(int i = 0 ; i < vec.size() ; i++){
        if(vec[i] == num){
            ind = i;
            break;
        }
    }
    int i = ind , lvl = 0;
    while(i < n-1){
        if(vec[i] == vec[i+1]){
            i++;
            continue;
        }
        if(vec[i] < vec[i+1] - vec[i] + lvl){
            return "NO";
        }
        lvl += vec[i+1] - vec[i];
        i++;
    }
    // if(lvl >= vec[n-2]){
    //     return "NO";
    // }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin >> n >> k;
        vector<int>vec(n);
        for(int i = 0 ; i < n ; i++){
            cin >> vec[i];
        }
        cout << Solver(n , k , vec) << "\n";
    }
}