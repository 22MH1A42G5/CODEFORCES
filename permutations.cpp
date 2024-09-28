#include<bits/stdc++.h>
using namespace std;
void Solved(string s,int start,int end,int &cnt){
    if(start>=end){
        cout<<s<<endl;
        cnt++;
        return;
    }
    for(int i=start;i<=end;i++){
        swap(s[start],s[i]);
        Solved(s,start+1,end,cnt);
        //cout<<s<<endl;
        swap(s[start],s[i]);
    }
}

int main(){
    string s;
    cin>>s;
    int cnt =0;
    Solved(s,0,s.size()-1,cnt);
    cout<<cnt;

}
