#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,f;
	cin>>n>>f;
	int nxt[n];
	for(int i=1;i<n;i++){
		cin>>nxt[i];
	}
	int x=1;
	while(x<f){
		x = x+nxt[x];
		// cout<<x<<' ';
	}
	if(x==f) cout<<"YES\n";
	else cout<<"NO\n";
}