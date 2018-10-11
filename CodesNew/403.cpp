#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=100000+5;
const ll INF=(ll)1e15;
ll a[maxn],s[maxn];
int main()
{
	int n,t;
	scanf("%d%d",&n,&t);
	for (int i=0;i<n;i++)
		scanf("%lld",&a[i]);
	a[n]=INF;
	s[0]=a[0];
	for (int i=1;i<=n;i++)
		s[i]=s[i-1]+a[i];
	int ans=0;
	for (int i=0;i<n;i++)
	{
		ll p=(i==0)?0:s[i-1];
		p+=t;
		int q=upper_bound(s,s+n+1,p)-s;
		ans=max(ans,q-i);
	}
	printf("%d\n",ans);
	return 0;
}