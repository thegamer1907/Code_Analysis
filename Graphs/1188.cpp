#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int a[n];
	for (int i=1;i<n;i++)
		cin>>a[i];
	int p = 1;
	while(p<t)
		p+=a[p];
	if (p==t)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
