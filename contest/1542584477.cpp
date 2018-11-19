#include<bits/stdc++.h>
#define N 209
using namespace std;

int n,m,tot,tg[19],s[109]; char ch[109];
struct node{
	int l,r,sl[19],sr[19]; bool bo[140009];
	void init(){
		scanf("%s",ch+1);
		int i,j,x,n=strlen(ch+1);
		for (i=1; i<=n; i++) s[i]=ch[i]-'0';
		for (i=1; i<=n; i++){
			for (j=x=0; j<16 && i+j<=n; j++){
				x=x<<1|s[i+j];
				bo[tg[j+1]|x]=1;
			}
		}
		l=r=min(n,16);
		for (i=1; i<=l; i++) sl[i]=s[i];
		for (i=1; i<=r; i++) sr[i]=s[n-i+1];
	}
	void mrg(node u,node v){
		l=u.l; memcpy(sl,u.sl,sizeof(u.sl));
		r=v.r; memcpy(sr,v.sr,sizeof(v.sr));
		int i,j,x,y;
		for (i=1; i<=v.l && l<16; i++){
			l++; sl[l]=v.sl[i];
		}
		for (i=1; i<=u.r && r<16; i++){
			r++; sr[r]=u.sr[i];
		}
		for (i=0; i<tot; i++) bo[i]=u.bo[i]|v.bo[i];
		for (i=1,x=0; i<=u.r; i++){
			x|=u.sr[i]<<i-1;
			for (j=1,y=x; j<=v.l; j++){
				y=y<<1|v.sl[j];
				if (i+j<=16) bo[tg[i+j]|y]=1;
			}
		}
	}
	int calc(){
		int i,j,k,x;
		for (i=1; ; i++){
			x=1<<i;
			for (j=0; j<x; j++) if (!bo[tg[i]|j]) break;
			if (j<x) break;
		}
		return i-1;
	}
}a[N];
int main(){
	scanf("%d",&n); tot=1<<17;
	int i;
	tg[16]=0;
	for (i=15; i; i--) tg[i]=tg[i+1]|1<<i+1;
	for (i=1; i<=n; i++) a[i].init();
	scanf("%d",&m);
	for (i=1; i<=m; i++){
		int x,y; scanf("%d%d",&x,&y);
		a[n+i].mrg(a[x],a[y]);
		printf("%d\n",a[n+i].calc());
	}
	return 0;
}
