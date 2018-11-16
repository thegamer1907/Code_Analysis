#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,t,k,p=0;
	cin>>n>>t;
	k=1;
	int a[n-1];
	for(int i=0;i<n-1;i++)
	cin>>a[i];
	while(k<=t){
		k=k+a[k-1];
		if(k==t)
		p++;
	}
	if(p==1)
	cout<<"YES";
	else
	cout<<"NO";
 return 0;
}