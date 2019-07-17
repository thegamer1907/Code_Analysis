// SeptEtavioxy
#include<cstdio>
#include<cctype>
#include<cstring>
#include<algorithm>
#include<cmath>
#define re register
#define ll long long
#define il inline
#define rep(i,s,t) for(re int i=(s);i<=(t);i++)
#define each(i,u) for(int i=head[u];i;i=bow[i].nxt)
#define pt(ch) putchar(ch)
#define pti(x) printf("%d",x)
#define ptll(x) printf("%I64d",x)
#define file(s) freopen(s".in","r",stdin),freopen(s".out","w",stdout)
using namespace std;
// c_ints
il ll ci(){
	re char ch;
	while(isspace(ch=getchar()));
	re ll x= ch^'0';
	while(isdigit(ch=getchar()))x=(x*10)+(ch^'0');
	return x;
}
enum{M=100023};
ll a[M];
int main(){
	ci();
	ll m= ci(), k= ci();
	rep(i,1,m) a[i]= ci();
	ll end= k, cnt= 0, p= 1;
	ll move;
	while( p<=m ){
		move= 0;
		while( p<=m && a[p]<=end ){
			move++;
			p++;
		}
		if( move ) cnt++, end+=move;
		else end+=((a[p]-end-1)/k+1)*k;
	}
	ptll(cnt);
	return 0;
}
/*
10 7 3
1 2 4 5 7 9 10
*/