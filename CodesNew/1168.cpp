#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define rep(i,x,y) for (int i=(x);i<=(y);i++)
#define drp(i,x,y) for (int i=(x);i>=(y);i--)
void judge(){
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
}
inline char read(){
	static const int IN_LEN=1000000;
	static char buf[IN_LEN],*s,*t;
	return (s==t?t=(s=buf)+fread(buf,1,IN_LEN,stdin),(s==t?-1:*s++):*s++);
}
template<class T>
inline void read(T &x){
	static bool iosig;
	static char c;
	for (iosig=false,c=read();!isdigit(c);c=read()){
		if (c=='-') iosig=true;
		if (c==-1) return;
	}
	for (x=0;isdigit(c);c=read()) x=((x+(x<<2))<<1)+(c^'0');
	if (iosig) x=-x;
}
const int OUT_LEN=10000000;
char obuf[OUT_LEN],*ooh=obuf;
inline void print(char c){
	if (ooh==obuf+OUT_LEN) fwrite(obuf,1,OUT_LEN,stdout),ooh=obuf;
	*ooh++=c;
}
template<class T>
inline void print(T x){
	static int buf[30],cnt;
	if (x==0) print('0');
	else{
		if (x<0) print('-'),x=-x;
		for (cnt=0;x;x/=10) buf[++cnt]=x%10+48;
		while (cnt) print((char)buf[cnt--]);
	}
}
inline void flush(){fwrite(obuf,1,ooh-obuf,stdout);}
const int maxn=110000;
const int inf=1<<30;
int n,ans,a[maxn];
int main(){
//	judge();
	read(n); a[0]=inf;
	rep(i,1,n){
		int x; read(x);
		a[i]=(x-i+n)/n;
		if (a[i]<a[ans]) ans=i;
	}
	print(ans),print('\n');
	return flush(),0;
}