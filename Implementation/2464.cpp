#include<bits/stdc++.h>
using namespace std;
int n,a,b,m,p;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		p-=a;
		p+=b;
		m=max(m,p);
	}
	cout<<m;
	return 0;
}