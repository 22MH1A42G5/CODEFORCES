#include <bits/stdc++.h>;
using namespace std;
void task(int n,int a[],int k)
{
    int res;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            res = (a[i]+2)/2;
        }
        else
        {
             res = (a[i]+1)/2;
        }
        if(res<k)
        {
            cout << res << " ";
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            a[i]=0;
        }
        else
        {
            a[i]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
}
void task2(int n,int a[],int k)
{
    int flag=7;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            if(a[i]%2==1)
           {
                cout << "False";
                flag=1;
                break;
           }
        }
        if(i%2==1)
        {
            if(a[i]%2==0)
            {
                cout << "False";
                flag=1;
                break;
            }
        }
    }
    if(flag!=1)
    {
        cout<<"True";
    }
}
int main() {
    //cout<<__builtin_popcount(5);
    /*string s = "1110";
    s.insert(2,"0");
    cout<<s;*/
    int n,k;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    //task(n,a,k);
    task2(n,a,k);
    
}