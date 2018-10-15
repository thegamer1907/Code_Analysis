#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	
	sort(a,a+n);
	int max = a[n-1];
	int sl[n]={0}, seatsl=0;
	for(int i=0;i<n;i++)
	{
		sl[i] = max-a[i];
		seatsl += sl[i];
	}
	int maxk = max+m;
	int mink;
	if(seatsl>m)
		mink=max;
	else
	{
		int d,q,r;
		d = m-seatsl;
		
		q=d/n;
		r=d%n;
		if(r>0)
			q++;
		mink = q+max;
	}
	cout<<mink<<" "<<maxk;
}