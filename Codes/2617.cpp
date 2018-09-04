#include<bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define slld(x) scanf("%lld",&x)
#define ss(x) scanf("%s",x)
#define mod 1000000007
#define bitcount __builtin_popcountll
#define ll long long
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>
#define mp make_pair
int sieve[10000005];
int val[10000005],values[10000005];
int main()
{
	int i,j,k;
	int n,temp=0;
	int x=sqrt(1e8);
	for(i=2;i<=x;i++)
	{
		if(sieve[i]==0)
		{
			// primes.pb(i);
			for(j=i*i;j<=10000000;j+=i)
			{
				sieve[j]=1;
			}
		}
	}
	sd(n);
	while(n--)
	{
		sd(j);
		val[j]++;
	}
	for(i=2;i<=10000000;i++)
	{
		if(sieve[i]==0)
		{
			for(j=i;j<=10000000;j+=i)
			{
				values[i]+=val[j];
			}
		}
	}
	for(i=2;i<=10000000;i++)
		values[i]+=values[i-1];
	int m;
	sd(m);
	while(m--)
	{
		sd(i);
		sd(j);
		i=min(i,10000001);
		j=min(j,10000000);
		printf("%d\n",values[j]-values[i-1] );
	}
	return 0;
}