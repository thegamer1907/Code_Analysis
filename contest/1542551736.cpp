#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

#define For(i,_beg,_end) for(int i=(_beg),i##end=(_end);i<=i##end;++i)
#define Rep(i,_beg,_end) for(int i=(_beg),i##end=(_end);i>=i##end;--i)

template<typename T>T Max(const T &x,const T &y){return x<y?y:x;}
template<typename T>T Min(const T &x,const T &y){return x<y?x:y;}
template<typename T>int chkmax(T &x,const T &y){return x<y?(x=y,1):0;}
template<typename T>int chkmin(T &x,const T &y){return x>y?(x=y,1):0;}
template<typename T>void read(T &x){
	T f=1;char ch=getchar();
	for(;ch<'0'||ch>'9';ch=getchar())if(ch=='-')f=-1;
	for(x=0;ch>='0'&&ch<='9';ch=getchar())x=x*10+ch-'0';
	x*=f;
}

const int N=20;
int f[N],n,k;

int main(){
	read(n);read(k);
	For(i,1,n){
		int x=0,y;
		For(j,1,k){
			read(y);
			x|=(y<<(j-1));
		}
		f[x]++;
	}
	For(i,0,(1<<k)-1)
		For(j,0,(1<<k)-1)
			if((i&j)==0&&f[i]&&f[j])return puts("YES"),0;
	puts("NO");
	return 0;
}