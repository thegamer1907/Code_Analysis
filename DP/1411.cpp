//************************
//*  Date: 10.8.2018     *
//*  Problem: 327A       *
//*  Author: xuziyuan    * 
//************************

#include <bits/stdc++.h>

#define rt0 return 0
#define rep(i,n) for(int i=0;i<n;i++)
#define repn(i,n) for(int i=1;i<=n;i++)
#define LL long long
#define pii pair<int,int>
#define pb push_back
#define fi first
#define se second
#define mpr make_pair

using namespace std;

const LL MOD=1e9+7;

int n;
int a[110],ans=-1;

int main()
{
	scanf("%d",&n);
	rep(i,n) scanf("%d",&a[i]);
	rep(i,n)
	{
		int tmp[110];
		for(int j=i;j<n;j++)
		{
			rep(k,n) tmp[k]=a[k];
			for(int k=i;k<=j;k++) tmp[k]^=1;
			int cnt=0;
			rep(k,n) cnt+=tmp[k];
			ans=max(ans,cnt);
		}
	}
	printf("%d\n",ans);
	rt0;
}