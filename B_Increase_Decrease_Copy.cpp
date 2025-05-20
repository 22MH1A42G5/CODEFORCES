#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>a,b;
        long long data, ans = 0 , min = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            cin>>data;
            a.push_back(data);
        }
        for(int i = 0 ; i < n+1 ; i++){
            cin>>data;
            b.push_back(data);
        }
        long long mid = 0;
        for(int i = 0 ; i < n ; i++){
            if((b[n] >= a[i]) && (b[n] <= b[i])){
                mid = 1;
            }
            if((b[n] <= a[i]) && (b[n] >= b[i])){
                mid = 1;
            }
            ans += abs(a[i]-b[i]);
        }
        for(int i = 0 ; i < n ; i++){
            int temp = abs(a[i] - b[n]);
            int temp1 = abs(b[i] - b[n]);
            if(temp < min){
                min = temp;
            }
            if(temp1 < min){
                min = temp1;
            }
        }
        if(mid == 1)
        ans+=1;
        else{
            ans+=min+1;
        }
        cout<<ans<<endl;
    }
}