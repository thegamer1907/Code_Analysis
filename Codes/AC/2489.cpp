#include<bits/stdc++.h>
#define ll long long
using namespace std;
int x[1000005];
int p[10000005];
int cnt[10000005];
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>x[i];
	p[0]=p[1]=-1;
	for(ll i=2;i<=10000000;i++)
	{
		if(p[i]==0)
		{
			p[i]=i;
			for(ll j=i;j*i<=10000000;j++)
			{
				p[j*i]=i;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		int a=x[i];
		int temp;
		while(a>1)
		{
			temp=p[a];
			cnt[temp]++;
			while(a % temp == 0)
				a/=temp;
		}
	}
	for(int i=2;i<=10000000;i++)cnt[i]+=cnt[i-1];
	int m;
	cin>>m;
	while(m--)
	{
		int l,r;
		cin>>l>>r;
		l=min(10000000,l);r=min(10000000,r);
		cout<<cnt[r]-cnt[l-1]<<"\n";
	}
	return 0;
}
