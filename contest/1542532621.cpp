#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int maxn=100005;
int n,k,a[maxn],ql,qr,cnt[maxn];
ll cost,F[maxn],G[maxn];

inline void Get(int l,int r){
	while(ql>l) cost+=(ll)cnt[a[--ql]],cnt[a[ql]]++;
	while(qr<r) cost+=(ll)cnt[a[++qr]],cnt[a[qr]]++;
	while(ql<l) cnt[a[ql]]--,cost-=(ll)cnt[a[ql++]];
	while(qr>r) cnt[a[qr]]--,cost-=(ll)cnt[a[qr--]];
}

void dp(int l,int r,int L,int R){
	if(l>r) return;
	int mid=l+r>>1,MID=L;
	for(int i=min(R+1,mid);i>L;i--){
		Get(i,mid);
		if(G[i-1]+cost<F[mid]) F[mid]=G[i-1]+cost,MID=i-1;
	}
	dp(l,mid-1,L,MID),dp(mid+1,r,MID,R);
}

int main(){
	scanf("%d%d",&n,&k),ql=1,qr=n;
	for(int i=1;i<=n;i++) scanf("%d",a+i),cost+=(ll)cnt[a[i]],cnt[a[i]]++,F[i]=cost;
	for(int i=2;i<=k;i++){
		memcpy(G,F,sizeof(F));
		memset(F,0x3f,sizeof(F));
		dp(1,n,0,n-1);
	}
	cout<<F[n]<<endl;
	return 0;
}