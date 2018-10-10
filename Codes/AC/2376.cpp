#include<bits/stdc++.h>
#define maxn 1e7
#define ll long long
using namespace std;
int dg[10000005],is[10000005];

int main()
{
	int n;cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;scanf("%d",&x);
		dg[x]++;
	}

	for(int i=2;i<=maxn;i++)
	{
		int tmp=dg[i];
		if(!is[i])
		{
			dg[i]=dg[i-1]+tmp;
			for(int j=i+i;j<=maxn;j+=i)
			{
				dg[i]+=dg[j];
				is[j]=1;
			}
		}
		else dg[i]=dg[i-1];
	}

	int t;cin>>t;
	while(t--)
	{
		ll l,r;
		scanf("%I64d%I64d",&l,&r);
		// cin>>l>>r;
		l=min((ll)maxn,l);
		r=min((ll)maxn,r);
		printf("%d\n",dg[r]-dg[l-1]);
		// cout<<dg[r]-dg[l-1]<<endl;
	}
}