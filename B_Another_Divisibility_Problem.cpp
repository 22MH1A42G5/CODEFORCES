#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin >> str;
        ll n = stoll(str);
        // ll i = 1;
        int i = 1;
        // vector<int>vec;
        // while(true && i < 1000000 ){
        //     int te = n + i;
        //     string tstr = str + to_string(i);
        //     ll num = stoll(tstr);
        //     if(num % te == 0){

        //         cout << i << " ";
        //         // vec.push_back(i);
        //         // break;
        //     }
        //     i++;
        // }
        cout << n * 2 <<  "\n";
    }
}