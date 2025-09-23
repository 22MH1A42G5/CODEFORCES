#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string tem = to_string(s[1]);
        int num = s[1]-'0';
        // cout << num << " ";
        int i = num-1;
        while(i > 0){
            cout << s[0] << i << "\n";
            i--;
        }
        i = num+1;
        while(i <= 8){
            cout << s[0] << i << "\n";
            i++;
        }
        i = s[0]-1;
        while(i-'a' >= 0){
            cout << char(i) << num << "\n";
            i--;
        }
        i = s[0]+1;
        while(i-'a' < 8){
            cout << char(i) << num << "\n";
            i++;
        }
    }

}