#include<bits/stdc++.h>
using namespace std;
int main(){
    int a , b , c , d , t ;
    cin>>a>>b>>c>>d>>t;
    vector<int>v;
    for(int i = 1 ; i <= t ; i++){
        v.push_back(i);
    }
    for(int i = 0 ; i < v.size(); i++){
        if(v[i]%a==0)
        v[i]=0;
    }
    for(int i = 0 ; i <v.size(); i++){
        if(v[i]%b==0)
        v[i]=0;
    }
    for(int i = 0 ; i <v.size(); i++){
        if(v[i]%c==0)
        v[i]=0;
    }
    for(int i = 0 ; i <v.size(); i++){
        if(v[i]%d==0)
        v[i]=0;
    }
    int  ans = 0;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i]==0)
        ans++;
    }
    cout<<ans;
    // vector<int>v;
    // v.push_back(a);
    // v.push_back(b);
    // v.push_back(c);
    // v.push_back(d);
    // sort(v.begin(),v.end());
    // a = v[0];
    // b = v[1];
    // c = v[2];
    // d = v[3];
    // if(b%a==0)
    // b=0;
    // if(c%a==0)
    // c=0;
    // if(d%a==0)
    // d=0;
    // if(c%b==0)
    // c=0;
    // if(d%b==0)
    // d=0;
    // if(d%c==0)
    // d=0;
    // // if(v[1]%v[0]==0)
    // // v[1]=0;
    // // if(v[2]%v[0]==0)
    // // v[2]=0;
    // // if(v[3]%v[0]==0)
    // // v[3]=0;
    // // if(v[2]%v[1]==0)
    // // v[2]=0;
    // // if(v[3]%v[1]==0)
    // // v[3]=0;
    // // if(v[3]%v[2]==0)
    // // v[4]=0;
    // // cout<<"HI";
    // for(int i = 0 ; i < v.size() ; i++){
    //     cout<<v[i]<<" ";
    // }
    // // cout<<a<< " "<<b<<" "<<c<<" "<<d;
    // int at = t / a;
    // int bt = t / b;
    // int bt1 = bt / a;
    // bt = bt - bt1;
    // int ct = t / c;
    // int ct1 = ct / a;
    // int ct2 = ct / b;
    // int ct3 = ct2 / a;
    // ct = ct-ct1-ct2-ct3;
    // int dt = t / d;
    // // cout<<dt<<endl;
    // int dt1 = dt / a;
    // // cout<<dt1;
    // int dt2 = dt / b;
    // // cout<<dt2;
    // int dt3 = dt2 / a;
    // // cout<<dt3;
    // int dt4 = dt / c;
    // // cout<<dt4;
    // int dt5 = dt4 / a;
    // int dt6 = dt4 / b;
    // int dt7 = dt6 / a;
    // dt = dt - dt1 - dt2 - dt3 - dt4 - dt5 - dt6 - dt7;
    // // cout<<at << " "<<bt<<" "<<ct<<" "<<dt;
    // // cout<<at+bt+ct+ dt;
}