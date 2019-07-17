#include<bits/stdc++.h>
#define maxn 200010
#define LL long long
#define inf 2147483647
using namespace std;
int sum;
struct node{int l,r,z,c,si,s;}a[maxn];
int _new(int x){a[++sum].z=x;a[sum].s=rand();a[sum].c=a[sum].si=1;return sum;}
void update(int x){a[x].si=a[a[x].l].si+a[a[x].r].si+a[x].c;return;}
void build(int &root){root=_new(-inf);a[root].r=_new(inf);update(root);return;}
void zig(int &p){int q=a[p].l;a[p].l=a[q].r;a[q].r=p;p=q;update(a[p].r);update(p);return;}
void zag(int &p){int q=a[p].r;a[p].r=a[q].l;a[q].l=p;p=q;update(a[p].l);update(p);return;}
void insert(int &p,int x){if(p==0){p=_new(x);return;}if(a[p].z==x){a[p].c++;update(p);return;}if(x<a[p].z){insert(a[p].l,x);if(a[a[p].l].s>a[p].s)zig(p);}else{insert(a[p].r,x);if(a[a[p].r].s>a[p].s)zag(p);}update(p);return;}
void remove(int &p,int x){if(p==0)return;if(a[p].z==x){if(a[p].c>1)a[p].c--;else{if(a[p].l||a[p].r){if(a[p].r==0&&a[a[p].l].s>=a[a[p].r].s)zig(p),remove(a[p].r,x);else zag(p),remove(a[p].l,x);}else p=0;}update(p);return;}if(x<a[p].z)remove(a[p].l,x);else remove(a[p].r,x);update(p);return;}
int getrank(int p,int x){if(p==0)return 0;if(a[p].z==x)return a[a[p].l].si;if(x<a[p].z)return getrank(a[p].l,x);return a[a[p].l].si+a[p].c+getrank(a[p].r,x);}
int n,root,rk[maxn];
int mp[maxn];
LL ans;
struct hs{int x,y;}d[maxn];
bool bk(hs a1,hs a2){return a1.y<a2.y;}
bool op(hs a1,hs a2){return a1.x<a2.x;}
int main(){
	//freopen("Tokitsukaze.in","r",stdin);
	//freopen("Tokitsukaze.out","w",stdout);
	scanf("%d",&n);build(root);
	for(int i=1;i<=n;i++)scanf("%d%d",&d[i].x,&d[i].y);
	sort(d+1,d+1+n,op);
	int  k=0,s=-1;
	for(int i=1;i<=n;i++){
		if(s!=d[i].x)k++;
		s=d[i].x;d[i].x=k;
		if(mp[k]==0)insert(root,k);
		mp[k]++;
	}
	sort(d+1,d+1+n,bk);int l=1,r;
	while(l<=n){
		r=l;
		while(d[r+1].y==d[l].y&&r<n)r++;if(l!=r)sort(d+l,d+r+1,op);
		for(int i=l;i<=r;i++)rk[i]=getrank(root,d[i].x)-1;
		int fz=getrank(root,inf)-1;rk[l-1]=-1;
		for(int i=l;i<=r;i++)
			ans+=(LL)(rk[i]-rk[i-1])*(LL)(fz-rk[i]);
		for(int i=l;i<=r;i++){
			mp[d[i].x]--;
			if(mp[d[i].x]==0)remove(root,d[i].x);
		}
		l=r+1;
	}
	printf("%lld\n",ans);
    return 0;
}