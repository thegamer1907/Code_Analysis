#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<bitset>
using namespace std;
typedef long long LL;
const int N=2e5+100,logn=3e6;
int gi() {
	int w=0;bool q=1;char c=getchar();
	while ((c<'0'||c>'9') && c!='-') c=getchar();
	if (c=='-') q=0,c=getchar();
	while (c>='0'&&c <= '9') w=w*10+c-'0',c=getchar();
	return q? w:-w;
}
struct DT{ int l,r,L,R; }q[logn];
LL f[N],g[N],ans;
int cnt[N],s[N];
inline void add(int k) {
	ans-=1LL*cnt[k]*(cnt[k]-1)/2;
	cnt[k]++;
	ans+=1LL*cnt[k]*(cnt[k]-1)/2;
}
inline void del(int k) {
	ans-=1LL*cnt[k]*(cnt[k]-1)/2;
	cnt[k]--;
	ans+=1LL*cnt[k]*(cnt[k]-1)/2;	
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("F.in","r",stdin);
	freopen("F.out","w",stdout);
#endif
	int n=gi(),m=gi(),i,k,l,r,L,R,c;DT p;
	for (i=1;i<=n;i++) s[i]=gi();
	memset(f,0x3f,sizeof(f));
	f[0]=0;
	
	L=1,R=0,ans=0;
	while (m--) {
		l=0,r=1;
		q[1]=(DT){1,n,0,n-1};

		while (l!=r) {
			p=q[++l];
			k=(p.l+p.r)>>1;
			g[k]=1LL<<60;
			for (i=p.L;i<=p.R&&i<k;i++) {
				while (L<i+1) del(s[L++]);
				while (i+1<L) add(s[--L]);
				while (R<k) add(s[++R]);
				while (k<R) del(s[R--]);
				if (f[i]+ans<g[k])
					g[k]=f[i]+ans,c=i;
			}
			if (p.l!=k)
				q[++r]=(DT){p.l,k-1,p.L,c};
			if (k!=p.r)
				q[++r]=(DT){k+1,p.r,c,p.R};
		}
		for (i=0;i<=n;i++) f[i]=g[i];
	}
	cout<<f[n]<<endl;
	return 0;
}
