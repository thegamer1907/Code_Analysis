#include<bits/stdc++.h>
using namespace std;

priority_queue<int> benches;
int n,come,arr[105],mxans,mx,mnans,le=0;

int main(){
	cin >> n;
	cin >> come;
	for(int i=1;i<=n;i++){
		cin >> arr[i];
		benches.push(arr[i]);
	}
	mx=benches.top();
	benches.pop();
	mxans=mx+come;
	mnans=mx;
	while(!benches.empty()){
		le+=mx-benches.top();
		benches.pop();
	}
	if(le<come){
		come-=le;
		mnans+=(come/n);
		if(come%n!=0) mnans++;
	}
	cout << mnans << ' ' << mxans << '\n';
}
