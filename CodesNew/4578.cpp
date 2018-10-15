#include<bits/stdc++.h>
using namespace std;
long long a[10000004];
int main()
{
	long long n,x,ok=1;
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	x=a[1];
	for(long long i=2;i<=n;i++) if(x!=a[i]) ok=0;
	if(ok) 
	{
		cout<<n<<endl;
		return 0;
	}
	sort(a+1,a+n+1);
	long long xiabiao=1;
	for(long long i=1;i<=n;i++)
	{
		if(a[i]>=2*a[xiabiao])
		{
			xiabiao++;
		}
	}
	cout<<n-min(n/2,xiabiao-1)<<endl;
}