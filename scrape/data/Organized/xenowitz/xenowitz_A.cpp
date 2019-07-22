#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX=1e5+10;
ll p[MAX];
int main()
{
	ll n,m,k;
	scanf("%lld%lld%lld",&n,&m,&k);
	for(int i=1;i<=m;i++) scanf("%lld",&p[i]);
	int ans=0;
	int sum=0;
	int now=1;
	while(now<=m)
	{
		ll r=((p[now]-sum-1)/k+1)*k+sum;
		//cout << p[now] - sum - 1 << endl;
		//cout<<"r: "<<r<<endl;
		while(now<=m&&p[now]<=r)
		{
			sum++;
			now++;
			//cout << sum << " sum and now " << now << endl;
		}
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}