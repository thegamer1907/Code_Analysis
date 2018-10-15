#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,mx=0,su;
	cin>>n>>m;
	su=m;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		mx=max(mx,x);
		su+=x;
	}
	int mn=su/n;
	if(su%n) mn++;
	if(mn<mx) mn=mx; 
	cout<<mn<<" "<<mx+m;
	return 0;
}