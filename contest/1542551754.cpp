#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
typedef long long LL;
const int N=200050;

LL f[21][N];
int a[N],s[N],n,k;
void solve(int x,int fl,int fr,int tl,int tr,LL ps){
	if(tl>tr)return;
	LL mn=1e18,wz;
	int md=tl+tr>>1,i;
	for(i=tl;i<=md;i++)ps+=s[a[i]]++;
	for(i=fl;i<=fr&&i<=md;i++){
		if(ps+f[x-1][i-1]<mn){
			mn=ps+f[x-1][i-1];
			wz=i;
		}
		ps-=--s[a[i]];
	}
	f[x][md]=mn;
	for(i--;i>=wz;i--)ps+=s[a[i]]++;
	solve(x,wz,fr,md+1,tr,ps);
	for(;i>=fl;i--)ps+=s[a[i]]++;
	for(i=md;i>=tl;i--)ps-=--s[a[i]];
	solve(x,fl,wz,tl,md-1,ps);
}
int main(){
	
	int i,j,h;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<=k;i++)
		for(j=0;j<=n;j++)
			f[i][j]=2e18;
	f[0][0]=0;
	for(i=1;i<=k;i++)
		solve(i,1,n,1,n,0);
	printf("%lld",f[k][n]); 

	return 0;
}
