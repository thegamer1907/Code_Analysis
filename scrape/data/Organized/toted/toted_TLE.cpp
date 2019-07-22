#include<bits/stdc++.h>
using namespace std;
const int maxn =1e5+100;
typedef long long ll;
ll p[maxn];
int main()
{
	std::ios::sync_with_stdio(false);
	ll n,ans=0,m,k,back=0,cnt=0,last;
	cin>>n>>m>>k;
	for(int i=0;i<m;i++)
		cin>>p[i];
	sort(p,p+m);
	back=k;
	last=0;
	while(1)
	{
		ll x=lower_bound(p,p+m,back)-p+1;
		ll cha=*lower_bound(p,p+m,back)-back;
		cha=cha/k;
		if(x==1&&back<p[0])x--;
		if(x>=m&&p[m-1]<back)x--;
		ll y=x;
		x-=last;
		if(x>0)
		{
			ans++;
			back+=x;
			cnt+=x;
		}
		else back+=k*cha;
		last=y;
		if(cnt>=m)break;
	}
	cout<<ans;
	return 0;
}