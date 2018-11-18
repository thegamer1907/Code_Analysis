#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int gi(){
	int x=0,w=1;char ch=getchar();
	while ((ch<'0'||ch>'9')&&ch!='-') ch=getchar();
	if (ch=='-') w=0,ch=getchar();
	while (ch>='0'&&ch<='9') x=(x<<3)+(x<<1)+ch-'0',ch=getchar();
	return w?x:-x;
}
#define ll long long
const int N = 1e5+5;
int n,K,a[N],cnt[N],pl=1,pr;
ll f[21][N],res;
void upt(int l,int r){
	while (pr<r) ++pr,res+=cnt[a[pr]]++;
	while (pl>l) --pl,res+=cnt[a[pl]]++;
	while (pr>r) res-=--cnt[a[pr]],--pr;
	while (pl<l) res-=--cnt[a[pl]],++pl;
}
void solve(int l,int r,int L,int R,int k){
	if (L>R) return;
	if (l==r){
		for (int i=min(R,l-1);i>=L;--i)
			upt(i+1,l),f[k][l]=min(f[k][l],f[k-1][i]+res);
		return;
	}
	int mid=l+r>>1,MID=L-1;
	for (int i=min(R,mid-1);i>=L;--i){
		upt(i+1,mid);
		if (f[k][mid]>f[k-1][i]+res) f[k][mid]=f[k-1][i]+res,MID=i;
	}
	solve(l,mid,L,MID,k);solve(mid+1,r,MID,R,k);
}
int main(){
	n=gi();K=gi();memset(f,63,sizeof(f));
	for (int i=1;i<=n;++i) res+=cnt[a[i]=gi()]++,f[1][i]=res;
	memset(cnt,0,sizeof(cnt));res=0;
	for (int i=2;i<=K;++i) solve(1,n,1,n,i);
	printf("%I64d\n",f[K][n]);return 0;
}
