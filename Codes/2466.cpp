//author: dxm
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define INF 1e9
#define rep(i,n) for(int (i)=0;(i)<n;i++)
#define REP(i,n) for(int (i)=1;(i)<=n;i++)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
inline void Fail(){
	printf("0");
	exit(0);
}

const int maxn=1000005;
const int maxm=10000005;
int n,q,sz,mx;
int a[maxn],cnt[maxm],val[maxn],prime[maxn];
ll tree[maxn*4];
bool p[maxm];

void _init(){
	memset(p,true,sizeof(p));
	for(int i=2;i<=maxm-5;i++){
		if(!p[i])continue;
		prime[sz++]=i;
		for(int j=i+i;j<=maxm-5;j+=i)
		p[j]=false;
	}
}

void build(int l,int r,int node){
	if(l==r){
		tree[node]=val[l];
		return;
	}
	int mid=(l+r)>>1;
	build(l,mid,node*2);
	build(mid+1,r,node*2+1);
	tree[node]=tree[node*2]+tree[node*2+1];
}


ll query(int l,int r,int vl,int vr,int node){
	if(l>vr||r<vl)return 0;
	if(l>=vl&&r<=vr)return tree[node];
	int mid=(l+r)>>1;
	return query(l,mid,vl,vr,node*2)+query(mid+1,r,vl,vr,node*2+1);
}

int main(){
	_init();
	scanf("%d",&n);
	rep(i,n){
		scanf("%d",&a[i]);
		cnt[a[i]]++;
		mx=max(mx,a[i]);
	}
	rep(i,sz){
		int x=prime[i];
		for(int j=x;j<=mx;j+=x)
		val[i]+=cnt[j];
	}
	build(0,sz-1,1);
	scanf("%d",&q);
	while(q--){
		int l,r;
		scanf("%d%d",&l,&r);
		int pos_l=lower_bound(prime,prime+sz,l)-prime;
		int pos_r=upper_bound(prime,prime+sz,r)-prime-1;
		printf("%I64d\n",query(0,sz-1,pos_l,pos_r,1));
	}
	return 0;
}

/*
Input:
-----------------
Output:
*/
