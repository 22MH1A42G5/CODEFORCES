#include<bits/stdc++.h>
using namespace std;
bool solution(int a,int b){
    if(a<0 && b<0){
        if(b!=-1) return false;
        else return true;
    }
    else if(b<0){
        if(b!=-1)  return false;
        else return true;
    }
    return true;
}
int main(){
  int testcases;
  cin>>testcases;
  while(testcases--){
    int s,f;
    cin>>s>>f;
    if(solution(s,f))
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
  }
}