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
    int t;
    cin >> t;
    while(t--){
        int a , b , xk , yk , xq , yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        if((abs(xk - xq) == a+b) || (abs(yk - yq) == a+b)){
            if(a + b == 2)
            cout << 1 << "\n";
            else if(a == b){
                
            }
            else cout << 2 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
}