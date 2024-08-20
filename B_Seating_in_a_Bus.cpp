#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,fl = 0;
        cin>>n;
        vector<int>vec;
        for(int i = 0 ; i < n ; i++){
            cin>>d;
            d -= 1;
            vec.push_back(d);
        }
        vector<int>prm(n,0);
        // for(int i = 0 ; i < vec.size() ; i++){
        //     cout<<vec[i]<<" ";
        // }
        // cout<<endl;
        prm[vec[0]] = 1;
        for(int i = 1 ; i < vec.size() ; i++){
            if(vec[i] == 0){
                if(prm[1] != 1){
                    cout<<"NO";
                    fl = 1;
                    break;
                }
            }
            if(vec[i] == n-1){
                if(prm[n-2] != 1){
                    cout<<"NO";
                    fl = 1;
                    break;
                }
            }
            if(prm[vec[i]-1] == 0 && prm[vec[i]+1] == 0){
                cout<<"NO";
                fl = 1;
                break;
            }
            else{
                prm[vec[i]] = 1;
            }
            // for(int i = 0 ; i < prm.size() ; i++){
            //     cout<<prm[i]<<" ";
            // }
            // cout<<endl;
        }
        if(fl != 1){
            cout<<"YES";
        }
        cout<<endl;
    }
}