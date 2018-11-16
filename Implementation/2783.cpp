#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,mx=0,all=0,k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>k;
		all+=k;
		mx=max(mx,k);
	}
	cout<<mx*n-all;
}