#include<bits/stdc++.h>
using namespace std;
#define pc(x) putchar(x)
namespace ib {char b[100];}
inline void pi(int x){
	if(x==0) {pc(48); return;}
	if(x<0) {pc('-'); x=-x;}
	char *s=ib::b;
	while(x) *(++s)=x%10,x/=10;
	while(s!=ib::b) pc((*(s--))+48);
}
inline void ri(int &x){
	x=0; static char c; bool t(0);
	while(c=getchar(),c<'0'||c>'9') if(c=='-') t=1; else t=0;
	do x=(x<<1)+(x<<3)+c-'0'; while(c=getchar(),c>='0'&&c<='9');
	if(t) x=-x;
}
struct line{
	string a;
	set<string> S[22];
}s[208];
int main(){
	//freopen("0.in","r",stdin);
	//freopen("0.out","w",stdout);
	int i,j,k,l,n,m,x,y; ri(n);
	for(i=1;i<=n;++i) cin>>s[i].a;
	for(i=1;i<=n;++i){
		l=s[i].a.size();
		for(j=1;j<=min(20,l);++j)
			for(k=0;k+j<=l;++k)
			s[i].S[j].insert(s[i].a.substr(k,j));
	}
	ri(m);
	for(i=1;i<=m;++i){
		ri(x); ri(y);
		for(j=1;j<21;++j){
			set<string>::iterator h=s[x].S[j].begin(),q=s[x].S[j].end();
			while(h!=q){s[i+n].S[j].insert(*h); ++h;}
			h=s[y].S[j].begin(),q=s[y].S[j].end();
			while(h!=q){s[i+n].S[j].insert(*h); ++h;}
			if(s[i+n].S[j].size()==(1<<j)) continue;
			for(k=max(1,j-(int)s[x].a.size());k<min(j,(int)s[y].a.size()+1);++k)
			s[i+n].S[j].insert(s[x].a.substr(s[x].a.size()-(j-k),j-k)+s[y].a.substr(0,k));
		}
		j=1; while(s[i+n].S[j].size()==(1<<j)) ++j;
		pi(j-1); pc('\n');
		if(s[x].a.size()+s[y].a.size()<40) s[i+n].a=s[x].a+s[y].a;
		else if(s[x].a.size()<20)
		s[i+n].a=s[x].a+s[y].a.substr(0,20-s[x].a.size())+s[y].a.substr(s[y].a.size()-20,20);
		else if(s[y].a.size()<20)
		s[i+n].a=s[x].a.substr(0,20)+s[x].a.substr(s[x].a.size()-(20-s[y].a.size()),20-s[y].a.size())+s[y].a;
		else s[i+n].a=s[x].a.substr(0,20)+s[y].a.substr(s[y].a.size()-20,20); 
		//cout<<s[i+n].a<<endl;
	}
	return 0;
}
