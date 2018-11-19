#include <bits/stdc++.h>
#define Pr(f,...) //printf(f,##__VA_ARGS__),fflush(stdout)
using namespace std;

const int K=3005,N=205;
int n,m,c[1<<21];
struct Item{string l,r,tot;int dt,ans;}a[N];
bool che(const string &s,int k){
	if(k==0)return true;
	int v,i,j,len=s.size();
	memset(c,0,sizeof(int)*(1<<k));
	for(i=0;i+k-1<len;++i){
		v=0;
		for(j=0;j<k;++j)v+=(s[i+j]-'0')<<j;
		c[v]=1;
	}
	for(i=0;i<(1<<k);++i){
		Pr("c[%d]=%d\n",i,c[i]);
		if(!c[i])return false;
	}
	return true;
}
int calc(const string &s){
	int mid,l=0,r=min(21,(int)s.size());
	while(r-l>1){
		mid=(l+r)>>1;
		if(che(s,mid))l=mid;
		else r=mid;
	}
	//che(s,2);
	//Pr("=%d\n",l);
	return l;
}
int main(int argc,char *argv[]) {
	//freopen("dat.in","r",stdin);
	int i,pl,pr;
	cin>>n;
	for(i=1;i<=n;++i){
		Item &t=a[i];
		cin>>t.tot;
		t.l=t.tot;t.r=t.tot;
		if(t.tot.size()>K){
			t.dt=1;
			t.l=t.l.substr(0,K);
			if(t.r.size()>K)t.r=t.r.substr(t.r.size()-K,K);
			//cout<<t.l<<endl<<t.r<<endl;
		}
		t.ans=calc(t.tot);
	}
	cin>>m;
	for(i=1;i<=m;++i){
		cin>>pl>>pr;
		Item &t=a[n+i];
		t.ans=max(max(a[pl].ans,a[pr].ans),calc(a[pl].r+a[pr].l));
		t.l=a[pl].l+(!a[pr].dt?a[pr].tot:"");
		t.l=t.l.substr(0,K);
		t.r=(!a[pl].dt?a[pl].tot:"")+a[pr].r;
		if(t.r.size()>K)t.r=t.r.substr(t.r.size()-K,K);
		if((!a[pl].dt)&&(!a[pr].dt)&&a[pl].tot.size()+a[pr].tot.size()>K)t.tot="",t.dt=1;
		else t.tot=a[pl].tot+a[pr].tot;
		printf("%d\n",t.ans);
	}
	scanf("%d",&m);
	return 0;
}
