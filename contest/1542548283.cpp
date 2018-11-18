#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<utility>
#include<cmath>
using namespace std;
const int maxn = 1e5 + 233;
typedef long long ll;
ll f[maxn],g[maxn],cur = 0;
int l,r,a[maxn],cnt[maxn];
inline void cal(int L,int R)
{
//	cout<<"$"<<L<<" "<<R<<endl;
	while(r<R)cur += cnt[a[++r]]++;
	while(l>L)cur += cnt[a[--l]]++;
	while(r>R)cur -= --cnt[a[r--]];
	while(l<L)cur -= --cnt[a[l++]];
//	cout<<"->"<<l<<" "<<r<<" "<<cur<<endl;
//	system("pause");
	return;
}
void solve(int L,int R,int pl,int pr)
{
	if(L>R)return ;
	int mid = (L+R)>>1;
//	cout<<"!"<<L<<" "<<R<<" "<<mid<<endl;
//	cout<<"->"<<pl+1<<" "<<mid<<endl;
	cal(pl+1,mid);
	int pm = pl;
	f[mid] = cur + g[pl];
//	cout<<"->"<<mid<<" "<<f[mid]<<endl;
	for(int i=pl+1;i<=pr;i++)
	{
		if(i>=mid)break;
		cur -= --cnt[a[l++]];
//		cout<<l<<" "<<r<<" "<<cur<<endl; 
		if(cur+g[i]<f[mid])
		{
			f[mid] = cur + g[i];
			pm = i;
		}
	}
	solve(L,mid-1,pl,pm);
	solve(mid+1,R,pm,pr);
}
int main()
{
	int n,k;cin>>n>>k;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	memset(cnt,0,sizeof(cnt));
	f[0] = 0;
	for(int i=1;i<=n;i++)
	{
		cur += cnt[a[i]]++;
		f[i] = cur;
	}
	l = 1,r = n;
//	cout<<"!!!!!!!!"<<cur<<endl;
	for(int i=2;i<=k;i++)
	{
		for(int i=1;i<=n;i++)g[i] = f[i];
		solve(1,n,0,n);
//		for(int i=1;i<=n;i++)cout<<f[i]<<" ";cout<<endl;
	}
	cout << f[n] << endl;
	return 0; 
} 