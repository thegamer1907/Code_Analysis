#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int INF=0x3f3f3f3f;
const int MAXN=100009;
ll f[MAXN],n,cnt;
void dfs(int sum,int num,ll x,int p)
{
	if(cnt>=10000) return;
	if(sum>10) return;
	if(p==0){
		if(sum==10) f[++cnt]=x;
		return;
	}
	for(int i=0;i<=9;++i){
		dfs(sum+i,i,x*10+i,p-1);
		if(cnt>=10000) return;
	}
}
int main()
{
	cnt=0;
	for(int i=2;i<=100&&cnt<=10000;++i){
		for(int j=1;j<=9&&cnt<=10000;++j)
			dfs(j,j,j,i-1);
	}
	scanf("%d",&n);
	printf("%lld\n",f[n]);
	return 0;
}