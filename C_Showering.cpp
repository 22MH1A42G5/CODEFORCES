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
string showering(vector<vector<int>>&vec,int s , int k){
    // cout<<k;
    if(vec[0][0] != 0){
        if(vec[0][0] >= s)
        return "YES";
    }
    int te1 = 0;
    for(int i = 0 ; i < vec.size() -1; i++){
        int te = vec[i+1][0] - vec[i][1];
        // cout<<te<<"\n";
        if(te >= s)
        return "YES";
    }
    if(vec[vec.size()-1][1] != k){
        if(k - vec[vec.size()-1][1] >= s)
        return "YES";
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    // cout<<t;
    while(t--){
        int n,s,d;
        cin>>n>>s>>d;
        vector<vector<int>>vec(n,vector<int>(2));
        for(int i = 0 ; i < n ;i++){
            cin>>vec[i][0];
            cin>>vec[i][1];
        }
        // for(int i = 0 ; i < n ;i++){
        //     cout<<vec[i][0]<<" ";
        //     cout<<vec[i][1]<<endl;
        // }
        cout<<showering(vec ,s , d)<<"\n";
        // cout<<t;
    }
}