#include<bits/stdc++.h>
using namespace std;
long long a[500005],now=1;
int main()
{
	long long n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		if(a[i]>=a[now]*2)
		{
			now++;
		}
	}
	now=now-1;
	cout<<n-min(n/2,now)<<endl;
	return 0;
}