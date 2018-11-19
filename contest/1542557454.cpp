#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<utility>
#include<queue>
#include<vector>
using namespace std;
const int maxn = 1e5 + 233;
typedef long long ll;
int a[maxn],L = 0,R = 0,cnt[maxn];
ll f[maxn],g[maxn],val=0;
inline ll cost(int l,int r)
{
//	cout<<l<<" "<<r<<endl;
	while(R<r)val += cnt[a[++R]]++;
	while(L>l)val += cnt[a[L--]]++;
	while(R>r)val -= --cnt[a[R--]];
	while(L<l)val -= --cnt[a[++L]];
//	cout<<"->"<<val<<endl;
	return val;
}
void solve(int l,int r,int pl,int pr)
{
//	cout<<l<<" "<<r<<" "<<pl<<" "<<pr<<endl;
	if(l>r)return ;
	int mid = (l+r)>>1;
	int pm = pl;
	for(int i=pl;i<=pr;i++)
	{
		if(i>mid)break;
		ll buf = g[i] + cost(i,mid);
		if(buf<f[mid])
		{
			f[mid] = buf;
			pm = i;
		}
	}
	solve(l,mid-1,pl,pm);
	solve(mid+1,r,pm,pr);
	return ;
}
int main()
{
	int n,k;cin>>n>>k;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)f[i] = 1LL<<60;
	f[0] = 0;
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
		{
			g[j] = f[j];
			f[j] = 1LL<<60;
		}
		memset(cnt,0,sizeof(cnt));
		val = 0;
		L = R = 1;
		solve(1,n,0,n);
/*		for(int j=1;j<=n;j++)
		cout<<f[j]<<" ";
		cout<<endl;*/
	}
	cout << f[n] << endl;
	return 0;
}