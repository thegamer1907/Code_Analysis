#include<bits/stdc++.h>
using namespace std;

#define DEBUG

#ifndef TZNLOCAL
#undef DEBUG
#endif

#ifdef DEBUG
#define debug(...) fprintf(stderr,__VA_ARGS__)
#else
#define debug(...) ;
#endif

bool msk[16];
int a[16];

int n,k;

int main()
{
	cin>>n>>k;
	for(int i=1,t;i<=n;i++)
	{
		t=0;
		for(int j=1;j<=k;j++)
		{
			int x;
			cin>>x;
			t*=2;
			t+=x;
		}
		msk[t]=1;
	}
	for(int s=1;s<(1<<(1<<k));s++)
	{
		bool ok=1;
		for(int i=0;i<(1<<k);i++)
		{
			if (s&(1<<i))
			{
				if (!msk[i])
				{
					ok=0;
				}
			}
		}
		memset(a,0,sizeof(a));
		int all=__builtin_popcount(s)/2;
		for(int i=0;i<(1<<k);i++)
		{
			if (s&(1<<i))
			{
				for(int j=0;j<k;j++)
				{
					if (i&(1<<j)) a[j]++;
				}
			}
		}
		for(int i=0;i<k;i++)
		{
			if (a[i]>all) ok=0;
		}
		if (ok)
		{
			cout<<"YeS"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
