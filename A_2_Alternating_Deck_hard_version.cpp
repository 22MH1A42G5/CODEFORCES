#include<bits/stdc++.h>
using namespace std;
#define ll long long
void Deck(int n){
    if(n == 1){
        cout << 1 << " " << 0 << " " << 0 << " " << 0 << "\n";
        return;
    }
    int te = 1 , cnt = 0;
    int aw = 1 , ab = 0 , bw = 0  , bb = 0 , flg = 1;
    for(int i = 2 ; i <= n ;){
        te++;
        int it = te;
        cnt++;
        while(it-- && i <= n){
            if(i % 2 == 1 && flg){
                bw++;
            }
            if(i % 2 == 0 && flg){
                bb++;
            }
            if(i % 2 == 1 && !flg){
                aw++;
            }
            if(i % 2 == 0 && !flg){
                ab++;
            }
            i++;
        }
        if(cnt == 2){
            cnt = 0;
            flg = !flg;
        }
    }
    cout << aw << " " << ab << " " << bw << " " << bb << "\n";
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        Deck(n);
    }
}