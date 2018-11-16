#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int i,l,b[n],c[n];
	set<int> a;
	for(i=0;i<n;i++){
		cin>>b[i];
	}
	for(i=n-1;i>=0;i--){
		a.insert(b[i]);
		c[i]=a.size();
	}
	for(i=0;i<m;i++){
		cin>>l;
		cout<<c[l-1]<<endl;
	}
	return 0;
}