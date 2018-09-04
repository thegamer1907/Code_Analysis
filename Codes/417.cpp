#include<bits/stdc++.h>
using namespace std;
int k;
int ans[10001];
	int sum,n;
	int m,a,b,c,d,e;
void find(int x)
{
	if(e==k)
	return;
	n=x;
	sum=0;
	while(n>0)
	{
		sum+=n%10;
		n=n/10;
	}
	if(sum==10)ans[++e]=x;
	find(x+1);
	
}
int main()
{
	cin>>k;
	find(1);
	cout<<ans[k];
}