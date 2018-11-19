#include<cstdio>
#include<cstring>
#include<algorithm>
#define ll int
#define N 105
#define rep(i,j,k) for (ll i=j;i<=k;++i)
#define per(i,j,k) for (ll i=j;i>=k;--i)
using namespace std;
inline ll read(){
	char ch=getchar(); ll x=0,f=1;
	while (ch<'0'||ch>'9') { if (ch=='-') f=-1; ch=getchar(); }
	while (ch>='0'&&ch<='9') { x=x*10+ch-'0'; ch=getchar(); }
	return x*f;
}
ll a,b,c,x,y,num;
int main(){
	a=read(); b=read(); c=read(); x=read(); y=read();
	if (a==12) a=0; if (x==12) x=0; if (y==12) y=0;
	if (x>y) swap(x,y);
	double h=(a+(double)b/60+(double)c/3600)*30;
	double m=(b+(double)c/60)*6;
	double s=c*6;
	if (h>=x*30&&h<=y*30) ++num;
	if (m>=x*30&&m<=y*30) ++num;
	if (s>=x*30&&s<=y*30) ++num;
	if (num==3||!num) puts("YES");
	else puts("NO");
}
