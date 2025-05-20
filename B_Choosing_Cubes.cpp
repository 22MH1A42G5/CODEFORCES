#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , f , k;
        vector<int>v;
        cin>>n>>f>>k;
        for(int i = 0 ; i < n ; i++){
            int data;
            cin>>data;
            v.push_back(data);
        }
        int fav = v[f-1];
        int c = 0 , c1 = 0;
        sort(v.rbegin(), v.rend());
        for(int i = 0 ; i < k ;i++){
            if(v[i]==fav){
                c = 1;
            }
        }
        for(int i = k ; i < n ; i++){
            if(v[i]==fav)
            c1 = 1;
        }
        if(c==1 && c1==1)
        cout<<"MAYBE";
        else if(c==0 && c1==1){
            cout<<"NO";
        }
        else if(c==1 && c1==0){
            cout<<"YES";
        }
        cout<<endl;

    }
}