// https://codeforces.com/edu/course/2/lesson/9/3/practice/contest/307094/problem/E

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
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll n;
    cin >> n;
    ll sac;
    cin >> sac;
    vi w(n),c(n);
    for(int i = 0; i < n ; i++){
        cin >> w[i];
    }
    fur(i , n) cin >> c[i];
    ll i = 0 , j = 0 , pc = 0,sum = 0,maxi = 0 , cost = 0;
    while(j < n){
        sum += w[j];
        cost += c[j];
        // for(int k = i ; k <= j ; k++){
        //     cout << w[k] << " ";
        // }
        // cout << "\n";
        while(i < n && sum > sac){
            sum -= w[i];
            cost -= c[i];
            i++;
        }
        if(sum <= sac){
            maxi = max(maxi , cost); 
        }
        j++;
    }
    cout << maxi;
}