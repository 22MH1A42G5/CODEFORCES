#include<bits/stdc++.h>
#define vi vector<ll>
#define ll long long
#define ld long double
#define pb push_back
#define f first
#define s second
#define ALL(x) begin(x), end(x)
#define fur(i, n) for (int i = 0; i < n; i++) 
#define rev(x) reverse(x.begin(), x.end());
#define sort(x) sort(x.begin(), x.end())
#define rsort(x) sort(x.rbegin(), x.rend())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
using namespace std;
string fun(string s , int i , int j){
    for(int k = 0 ; k < s.size() ; k++){
        if(s[k] == 'U') i++;
        if(s[k] == 'D') i--;
        if(s[k] == 'R') j++;
        if(s[k] == 'L') j--;
        if(i == 1 && j == 1){
            return "YES";
        }
    }
    return "NO";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << fun(s , 0 , 0) << "\n";
    }
}