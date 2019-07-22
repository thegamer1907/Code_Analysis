#include<bits/stdc++.h>
using namespace std;

#define int long long

int a[100010];

main()
{
	int N,M,K;
	cin>>N>>M>>K;
	for(int i=1;i<=M;i++)
	{
		cin>>a[i];
	}
	int ans=0,pos=1;
	int ub=K;
	while(pos<=M)
	{
		int d=0;
		while(a[pos]<=ub && pos<=M)
		{
			pos++;
			d++;
		}
		if(d==0)
		{
			ub+=(a[pos]-ub)/K*K;
			if(a[pos]>ub) ub+=K;
			continue;
		}
		ub+=d;
		ans++;
	}
	cout<<ans<<endl;
}