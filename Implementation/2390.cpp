#include<bits/stdc++.h>
using namespace std;
int n,k,p,m;
int main()
{
	cin>>n>>k;
	k=240-k;
	while(k>=0)
	{
		p++;
		k-=5*p;
	}
	p--;
	cout<<min(n,p);
	return 0;
}