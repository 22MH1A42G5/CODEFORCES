#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>v;
	    for(int i = 0 ; i < n; i++){
	        int data;
	        cin>>data;
	        v.push_back(data);
	    }
        int sum = 0;
	    for(int i = 0 ; i < n-1 ;i++){
	        sum+=abs(v[i]-v[i+1]);
	    }
        // int sum1 = sum;
        int maxi = 0;
        int sum1=0;
        for(int i = 1 ; i < n-1 ; i++){
            sum1 = sum;
            sum1-=abs(v[i-1]-v[i])+abs(v[i+1]-v[i]);
            sum1+= abs(v[i-1]-1) + abs(v[i+1] - 1);
            if(maxi < sum1){
                maxi = sum1;
            }
            sum1 = sum;
            sum1-=abs(v[i-1]-v[i])+abs(v[i+1]-v[i]);
            sum1+= abs(v[i-1]-k) + abs(v[i+1] - k);
            if(maxi < sum1){
                maxi = sum1;
            }
        }
        sum1 = sum;
        sum1-=abs(v[0]-v[1]);
        sum1+= abs(v[1]-1);
        if(maxi < sum1)
        maxi = sum1;
        sum1 = sum;
        sum1-=abs(v[0]-v[1]);
        sum1+= abs(v[1]-k);
        if(maxi < sum1)
        maxi = sum1;
        sum1 = sum;
        sum1-=abs(v[n-1]-v[n-2]);
        sum1+= abs(v[n-2]-1);
        if(maxi < sum1)
        maxi = sum1;
        sum1 = sum;
        sum1-=abs(v[n-1]-v[n-2]);
        sum1+= abs(v[n-2]-k);
        if(maxi < sum1)
        maxi = sum1;
        cout<<maxi<<endl;
	}
}
