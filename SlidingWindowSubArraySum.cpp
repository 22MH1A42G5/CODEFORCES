#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,1,2,4,3};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        v.push_back(data);
    }
    int i=0,j=1;
    int tar;
    cin>>tar;
    int flag=0;
    int s=v[0];
    if(s==tar){
        cout<<s<<endl;
    }
    while(j<v.size() ){
        if(s+v[j]==tar){
            if(i==j){
                flag=1;
                cout<<v[i];
            }
            else{
                flag=1;
                for(int k=i;k<=j;k++)
                cout<<v[k]<<" ";
                cout<<"size"<<j-i<<" ";

            }
            //cout<<v[i]<<" "<<v[j]<<" ";
            cout<<endl;
            s-=v[i];
            i++;
            s+=v[j];
            j++;
        }
        if(s+v[j]<tar){
            //cout<<"HI";
            s+=v[j];
            j++;
        }
        else if(s+v[j]>tar){
            s-=v[i];
            i++;
        }
    }
    if(flag==0){
        cout<<-1;
    }
}