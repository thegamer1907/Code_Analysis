#include<bits/stdc++.h>

using namespace std;

typedef unsigned int UI;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int,int> pii;
typedef pair<LL, LL> pll;

#define mp make_pair
#define pb push_back
#define fir first
#define sec second

#define fo0(i,a,b) for(int i=(a);i<(b);i++)
#define fo1(i,a,b) for(int i=(a);i<=(b);i++)
#define fd0(i,a,b) for(int i=(b);i>(a);i--)
#define fd1(i,a,b) for(int i=(b);i>=(a);i--)
#define mset(a,b) memset(a,(b),sizeof(a))

#define max(a,b) (a > b ? a : b)
#define min(a,b) (a < b ? a : b)
#define abs(a) (a < 0 ? -a : a)
#define fabs(a) (a < 0 ? -a : 0)

template<typename T> inline void in(T &x){
	x = 0; int fl = 1; char ch = getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')fl=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=(x<<1)+(x<<3)+ch-'0';ch=getchar();}
	x*=fl;
}
template<typename T> void out(T x){if(x<0){putchar('-');x=-x;}if(x/10)out(x/10);putchar(x%10+'0');}
template<typename T> inline void outln(T x){out(x);putchar(10);}
template<typename T> inline void outsp(T x){out(x);putchar(' ');}
template<typename T> inline T gcd(T a, T b){T t;if(a>b){while(b){t=b;b=a%b;a=t;}return a;}else{while(a){t=a;a=b%a;b=t;}return b;}}
template<typename T> inline T lcm(T a, T b){return a/gcd(a,b)*b;}

const int N = 200005;

int n;
LL a[N], ans;

int main(){
	in(n);
	fo1(i, 1, n)	in(a[i]);
	int l = 0, r = n + 1;
	LL suml = 0, sumr = 0;
	while(l < r){
		if(suml == sumr){
			ans = max(ans, suml);
			suml += a[++l];
		}
		else if(suml < sumr)	suml += a[++l];
		else if(suml > sumr)	sumr += a[--r];
	}
	outln(ans);
	return 0;
}