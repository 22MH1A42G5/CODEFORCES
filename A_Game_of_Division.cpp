#include<bits/stdc++.h>
using namespace std;
int game_division(int n, vector<int>vec,int k){
    for(int i = 0 ; i < n ; i++){
        int cnt = 0;
        for(int j = 0 ; j < n ; j++){
            if(i != j){
                int te = abs(vec[i]-vec[j]);
                if(te % k != 0){
                    cnt++;
                }
                else
                break;
            }
            if(cnt == n-1)
            return i+1;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,d;
        cin>>n>>k;
        vector<int>vec;
        for(int i = 0 ;i < n ; i++){
            cin>>d;
            vec.push_back(d);
        }
        if(game_division(n,vec,k) != -1){
            cout<<"YES"<<endl;
            cout<<game_division(n,vec,k);
        }
        else
        cout<<"NO";
        cout<<endl;
    }
}
// 3
// 10 7 3 4 5