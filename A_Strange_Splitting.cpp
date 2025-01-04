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
string Splitting(vi &vec , int n){
    unordered_map<int,int>mpp;
    fur(i , n){
        mpp[vec[i]]++;
    }
    string ans="";
    if(mpp.size() >= 2){
        if(vec[0] != vec[1]){
            mpp.erase(vec[0]);
            if(mpp.size() == 1){
                ans += "BB";
                fur( i , n-2)
                ans += "R";
                cout<<"YES"<<"\n";
                return ans;
            }
            ans += "B";
            fur( i , n-1)
            ans += "R";
            cout<<"YES"<<"\n";
            return ans;
        }
        ans += "B";
        fur( i , n-1){
            ans += "R";
        }
        cout<<"YES"<<"\n";
        return ans;
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vi vec(n);
        fur(i , n) cin>>vec[i];
        cout<<Splitting(vec , n)<<endl;
    }
}

// 1 1 1 2 2 2