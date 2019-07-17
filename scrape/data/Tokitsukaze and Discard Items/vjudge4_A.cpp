#include<cstdio>
#include<algorithm>
using namespace std;

typedef long long ll;
const int Maxm=1e5;

ll N,M,K;
ll p[Maxm+5];
ll o=0;

int BS(ll val,int lb,int ub) {
	while(lb+1<ub) {
		int mid=(lb+ub)>>1;
		if(p[mid]-o==val)
			return mid;
		if(p[mid]-o<val)
			lb=mid;
		else ub=mid; 
	}
	return lb;
}

int main() {
	#ifdef LOACL
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	#endif
	scanf("%lld %lld %lld",&N,&M,&K);
	for(int i=1;i<=M;i++)
		scanf("%lld",&p[i]);
	int ans=0;
	for(int i=1;i<=M;) {
		ll k=((p[i]-o)%K==0?(p[i]-o)/K-1:(ll)(p[i]-o)/K);
		ll st=k*K+1;
		int pos=BS(st+K-1,i,M+1);
		o=pos;
		i=pos+1;
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}