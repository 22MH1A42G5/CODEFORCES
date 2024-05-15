#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    string s;
	    stack<char>st;
	    cin>>n>>s;
	    int ans=1;
	    /*for(int i = 1 ; i < s.size() ; i++){
	        if(s[i-1]!=s[i]){
	            ans++;
	        }
	    }*/
	    //cout<<ans<<endl;
        if(s[0]=='R')
            st.push('P');
        else if(s[0] == 'P')
            st.push('S');
        else if(s[0]=='S')
            st.push('R');
	    for(int i = 1 ; i < s.size() ; i++){
	        if(s[i]=='R'){
	            if(st.top() != 'P'){
	                st.push('P');
	                ans++;
	            }
                else{
                    st.push('T');
                }
	        }       //RRRSSSPPP     
	        else if(s[i] == 'P'){
	            if(st.top() != 'S'){
	                st.push('S');
	                ans++;
	            }
                else{
                    st.push('T');
                }
	        }
	        else if(s[i]=='S'){
	            if(st.top() != 'R'){
	                st.push('R');
	                ans++;
	            }
                else{
                    st.push('T');
                }
	        }
	    }
	    cout<<ans<<endl;
	}

}
