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

const int N=5;
double h,m,s,t1,t2,a[N];

int main(){
	read(h);read(m);read(s);read(t1);read(t2);
	a[1]=s;
	a[2]=m+s/60.0;
	a[3]=((int)h%12)*5+(a[2]*5/60.0);
	sort(a+1,a+4);
	t1*=5;t2*=5;
	if(t1>=a[1]&&t1<=a[2]&&t2>=a[1]&&t2<=a[2])return puts("YES"),0;
	if(t1>=a[2]&&t1<=a[3]&&t2>=a[2]&&t2<=a[3])return puts("YES"),0;
	if((t1<=a[1]||t1>=a[3])&&(t2<=a[1]||t2>=a[3]))return puts("YES"),0;
	puts("NO");
	return 0;
}