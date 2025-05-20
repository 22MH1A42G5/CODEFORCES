#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>vec;
    vector<int>tem;
    int sm = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            int data;
            cin>>data;
            tem.push_back(data);
        }
        vec.push_back(tem);
        tem.clear();
    }
    int mid = n/2;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(i==j){
                sm += vec[i][j];
                // cout<<vec[i][j]<<" ";
            }
            if(i == n-j-1 && i != j){
                sm += vec[i][j];
                // cout<<vec[i][j]<<" ";
            }
            if(j == mid && i != j){
                sm += vec[i][j];
                // cout<<vec[i][j]<<" ";
            }
            if(i == mid && i != j){
                sm += vec[i][j];
                // cout<<vec[i][j]<<" ";
            }
        }
    }
    cout<<sm;
}