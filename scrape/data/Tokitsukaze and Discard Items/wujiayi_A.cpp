#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX=1e5+10;
ll p[MAX];
int main()
{
	ll n,m,k;
	scanf("%I64d%I64d%I64d",&n,&m,&k);
	for(int i=1;i<=m;i++) scanf("%I64d",&p[i]);
	int ans=0;
	int sum=0;
	int now=1;
	while(now<=m)
	{
		ll r=((p[now]-sum-1)/k+1)*k+sum;
	//	cout<<"r:"<<r<<endl;
		while(now<=m&&p[now]<=r)
		{
			sum++;
			now++;
		}
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}