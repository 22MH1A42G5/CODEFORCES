#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,up,lo,data,cnt1=0,max=0,min=INT_MAX;
        cin>>n>>lo>>up;
        vector<int>v;
        for(int i = 0 ; i < n ; i++){
            cin>>data;
            v.push_back(data);
        }
        for(int i = 0 ; i < n ; i++){
            if(v[i]>=lo && v[i]<=up){
                cnt1++;
            }
            else{
                cnt1--;
            }
            if(max<cnt1)
            max=cnt1;
            if(min>cnt1)
            min=cnt1;
        }
        if(cnt1==n)
            min = 0;
        cout<<max<<" "<<min<<endl;
    }
}