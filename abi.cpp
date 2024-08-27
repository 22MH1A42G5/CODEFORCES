#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int>q;
	int k=2;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	stack<int>st;
	queue<int>qu;
	int t=k;
	while(t!=0){
		st.push(q.front());
		q.pop();
		t--;
	}
	while(!st.empty()){
		qu.push(st.top());
		st.pop();
	}
	while(!q.empty()){
		qu.push(q.front());
		qu.pop();
	}
}