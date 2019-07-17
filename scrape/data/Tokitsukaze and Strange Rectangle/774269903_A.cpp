#include<bits/stdc++.h>
#define LL long long 
#define maxn 200010
#define rep(i,a,b) for (int i=(a); i<=(b); i++)
#define per(i,a,b) for (int i=(a); i>=(b); i--)
using namespace std;
struct node{int x,y;}a[maxn];
bool bk(node a1,node a2){
	if(a1.y==a2.y)return a1.x<a2.x;
	return a1.y>a2.y;
}
int n,su,fz[maxn],used[maxn];
int find(int x){return lower_bound(fz+1,fz+su+1,x)-fz;}
int sum[maxn];
void add(int x){while(x<=su)sum[x]++,x+=x&(-x);return;}
int query(int x){int ret=0;while(x>0)ret+=sum[x],x-=x&(-x);return ret;}
int main() {
	//freopen("Tokitsukaze.in","r",stdin);
	//freopen("Tokitsukaze.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d%d",&a[i].x,&a[i].y),fz[++su]=a[i].x;
	sort(a+1,a+n+1,bk);sort(fz+1,fz+su+1);
	su=unique(fz+1,fz+su+1)-fz-1;
	for(int i=1;i<=n;i++)a[i].x=find(a[i].x);
	LL ans=0;
	for(int i=1;i<=n;i++){
		int l=query(a[i].x-1),r;
		if(i!=n&&a[i+1].y==a[i].y)r=query(a[i+1].x-1)-query(a[i].x);
		else r=query(su)-query(a[i].x);
		ans=ans+(LL)(l+1)*(LL)(r+1);
		if(!used[a[i].x])used[a[i].x]=1,add(a[i].x);
	}
	printf("%lld\n",ans);
	return 0;
}