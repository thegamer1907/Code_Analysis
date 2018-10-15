#include<iostream>
#include<cstring>
using namespace std;
int n,q,ans;
long long a[202020],k[202020],b[202020],sum=0;

int main()
{
	cin>>n>>q;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=q;i++)
		cin>>k[i];
	
	b[0]=0;
	for(int i=1;i<=n;i++)
		b[i]=b[i-1]+a[i];
		
	for(int t=1;t<=q;t++)
	{
		sum+=k[t];
		int l=0,r=n,mid;
		while(l<r-1)
		{
			mid=(l+r)>>1;
			if(sum>b[mid])
			{
				l=mid;
			}
			else
			{
				r=mid;
			}
		}
		if(sum>=b[n])
		{
			sum=0;
			ans=n;
		}
		else if(sum==b[r])
		{
			ans=n-r;
		}
		else 
		{
			ans=n-r+1;
		}
		cout<<ans<<endl;
	}
	return 0;
}
