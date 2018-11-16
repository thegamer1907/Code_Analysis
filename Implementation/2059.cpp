#include<bits/stdc++.h>
using namespace std;
int main(){
	int i,j,l=0,k=0,t=0,n,m;
	vector<long long>x;
	vector<long long>y;
	vector<long long>z;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>m; x.push_back(m);
		cin>>m; y.push_back(m);
		cin>>m; z.push_back(m);
	}
	for(auto j : x){
		l+=j;
	}
	for(auto m : y){
		k+=m;
	}
	for(auto m : z){
		t+=m;
	}
	if(l==0&&k==0&&t==0) cout<<"YES";
	else cout<<"NO";
}