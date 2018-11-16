#include <bits/stdc++.h>
using namespace std;

int main() {
	int  n,k,i,j,t;
	cin>>n>>k;
	vector<int> a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	t=a[k-1];
	int c=0;
	for(i=0;i<n;i++)
	{
		if((a[i]>=t)&&(a[i]!=0))
		c++;
	}
	
	cout<<c;
	return 0;
}