#include<iostream>
using namespace std;
int a[100001],c[100001],r[100002];
int main () {
	int n,m,q;

	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		r[i]=r[i+1];
		if(c[a[i]]==0) r[i]++;
		c[a[i]]++;
	}
	
	for(int i=0;i<m;i++){
		cin>>q;
		cout<<r[q]<<endl;
	}
	
}