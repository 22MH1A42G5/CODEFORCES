#include<bits/stdc++.h>
using namespace std;
string prep_exam(int sq,int n , int m ,vector<int>&sqs , vector<int>&got){
    string ans = "";
    // sq = n , n = m , m = k
    if(m >= sq)
    {
        for(int i = 0 ; i < n ; i++){
            ans +="1";
        }
        return ans;
    }
    else if(k < n-1){
        for(int i = 0 ;i < n ; i++){
            
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int sq, n , m;
        cin>>sq >> n >> m;
        vector<int>sqs(n),got(m);
        for(int i = 0 ; i < n ; i++)
        cin>>sqs[i];
        for(int i = 0 ; i < m ; i++)
        cin>>got[i];
        prep_exam(sq,n,m,sqs,got);
    }
}