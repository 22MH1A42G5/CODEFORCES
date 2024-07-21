#include<bits/stdc++.h>
using namespace std;
string Remove_Smallest(vector<int>v , int n){
    int i = 0 , j = 1;
    while(i < v.size()){
        if(v.size() == 1){
            return "YES";
        }
        if(abs(v[i] - v[j]) <= 1){
            v.erase(v.begin() + i);
            // for(int k = 0 ; k < v.size() ; k++){
            //     cout<<v[k]<<" ";
            // }
        }
        else{
            i++;
            j++;
        }
        // return "s";
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,data;
        cin>>n;
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            cin>>data;
            v.push_back(data);
        }
        sort(v.begin() , v.end());
        cout<<Remove_Smallest(v,n)<<endl;
    }
}