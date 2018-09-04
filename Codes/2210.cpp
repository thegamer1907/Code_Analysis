#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<cmath>
#include<cstdlib>
#include<string>
#include<cstring>
#include<bitset>
#define LL long long
#define mod 1e9+7
#define INF 0x3f3f3f3f
using namespace std;

namespace FastIO {
	template<typename tp> inline void read(tp &x) {
		x=0; register char c=getchar(); register bool f=0;
		for(;c<'0'||c>'9';f|=(c=='-'),c = getchar());
		for(;c>='0'&&c<='9';x=(x<<3)+(x<<1)+c-'0',c = getchar());
		if(f) x=-x;
	}
	template<typename tp> inline void write(tp x) {
		if (x==0) return (void) (putchar('0'));
		if (x<0) putchar('-'),x=-x;
		int pr[20]; register int cnt=0;
		for (;x;x/=10) pr[++cnt]=x%10;
		while (cnt) putchar(pr[cnt--]+'0');
	}
	template<typename tp> inline void writeln(tp x) {
		write(x);
		putchar('\n');
	}
}
using namespace FastIO;
const int N=200010;
int d[N],n;
LL qz[N],hz[N];
int main(){
	read(n);
	for(int i=1;i<=n;++i) read(d[i]),qz[i]=qz[i-1]+d[i];
	LL maxn=0;
	for(int i=n;i>=1;--i) hz[i]=hz[i+1]+d[i];
	int head=1,tail=n;
	while(head<tail){
		if(qz[head]==hz[tail]){
			maxn=qz[head];
			head++;
			tail--;
		}else if(qz[head]<hz[tail]){
			head++;
		}else tail--;
	}
	writeln(maxn);
	return 0;
}
