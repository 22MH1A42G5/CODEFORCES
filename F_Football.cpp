#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n , a , b;
    cin >> n >> a >> b;
    if(n == 1 && a==b){
        cout << 1 << "\n";
        cout << a << ":" << b <<"\n";
        return 0;
    }
    if(a + b < n){
        cout << abs(a+b-n)<<"\n";
        while(n && a){
            cout << 1 <<  ":" << 0<<"\n";
            n--;
            a--;
        }
        while(n && b){
            cout << 0 << ":" << 1 << "\n";
            n--;
            b--;
        }
        while(n){
            cout << 0 << ":" << 0 <<"\n";
            n--;
        }
    }
    else if(a + b >= n){
        cout << 0 << "\n";
        if(a < b){
            n -= 1;
            while(n && a){
                cout << 1 << ":" << 0 <<"\n";
                n--;
                a--;
            }
            while(n && b){
                cout << 0 << ":" << 1 << "\n";
                n--;
                b--;
            }
            cout << a << ":" << b << "\n";
        }
        else{
            n -= 1;
            while(n && b){
                cout << 0 << ":" << 1 <<"\n";
                n--;
                b--;
            }
            while(n && a){
                cout << 1 << ":" << 0 << "\n";
                n--;
                a--;
            }
            cout << a << ":" << b << "\n";
        }
    }
}