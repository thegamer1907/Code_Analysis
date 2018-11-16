#include <bits/stdc++.h>
using namespace std;
int main(){
	int a[101];
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>j;
		a[j]=i;
	}
	for(i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
}