#include<bits/stdc++.h>
using namespace std;


int n,m,a;
priority_queue<int,vector<int>,greater<int> > pqn;
priority_queue<int,vector<int>,greater<int> > pqm;

int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a;
		pqn.push(a);
	}
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> a;
		pqm.push(a);
	}
	int ans=0;
	while(!pqn.empty() && !pqm.empty()){
		int x=pqn.top();
		int y=pqm.top();
		if(x==y || x+1==y || x-1==y){
			ans++;
			pqn.pop();
			pqm.pop();
		}
		else{
			if(x>y) pqm.pop();
			else pqn.pop();
		}
	}
	cout << ans << '\n';
}
