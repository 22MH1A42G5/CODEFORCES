#include<bits/stdc++.h>
#define vi vector<ll>
#define ll long long
#define ld long double
#define pb push_back
#define f first
#define s second
#define ALL(x) begin(x), end(x)
#define fur(i, n) for (int i = 0; i < n; i++) 
#define rev(x) reverse(x.begin(), x.end());
#define sort(x) sort(x.begin(), x.end())
#define rsort(x) sort(x.rbegin(), x.rend())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
using namespace std;
string final(int n , vector<int>&a , vector<int>&b){
    for(int i = 0 ; i < n ; i++){
        if(a[i] < b[i]){
            swap(a[i] , b[i]);
        }
    }
    int al = a[n-1];
    a.pop_back();
    int bl= b[n-1];
    b.pop_back();
    if(al >= MAX(a) && bl >= MAX(b)){
        return "Yes";
    }
    return "No";
}
string showstoper(int n , vector<int>&a , vector<int>&b){
    int al = a[n-1];
    int bl = b[n-1] , acnt = 0 , bcnt = 0;
    a.pop_back();
    b.pop_back();
    int amaxi = MAX(a);
    int bmaxi = MAX(b);
    if(al == bl){
        if(amaxi <= al && bmaxi <= bl){
            return "Yes";
        }
        else{
            return "No";
        }
    }
    if((al >= amaxi && bl >= bmaxi) || (al >= bmaxi && bl >= amaxi)){
        return "Yes";
    }
    int binacnt = 0 , ainbcnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(bl >= a[i]){
            binacnt++;
        }
        if(al < a[i]){
            acnt++;
        }
        if(al >= b[i]){
            ainbcnt++;
        }
        if(bl < b[i]){
            bcnt++;
        }
    }
    int aans  = 0, bans = 0;
    if(bl < al){
        if(acnt != 0){
            return "No";
        }
        for(int i = 0 ; i< n ;i++){
            if(a[i] <= bl && b[i] > bl){
                bans++;
            }
        }
        if(bans == bcnt){
            return "Yes";
        }
        else{
            return "No";
        }
    }
    if(bl > al){
        if(bcnt != 0){
            return "No";
        }
        for(int i = 0 ; i< n ;i++){
            if(b[i] <= al && a[i] > al){
                aans++;
            }
        }
        if(aans == acnt){
            return "Yes";
        }
        else{
            return "No";
        }
    }

}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>a(n) , b(n);
        fur(i , n) cin >> a[i];
        fur(i , n) cin >> b[i];
        cout << final(n , a , b) << "\n";
    }
}