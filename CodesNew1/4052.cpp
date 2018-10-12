#include<cstdio>
#include<algorithm>
#define int long long
using namespace std;
inline int read(){int x=0,f=1,ch=getchar(); while(ch<'0'||ch>'9'){if(ch=='-') f=-1; ch=getchar();} while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();} return x*f;}
inline void write(int x){if (x<0) putchar('-'),x=-x; if (x>=10) write(x/10); putchar(x%10+'0');}
inline void writeln(int x){write(x); puts("");}
const int N=3e5+5;
int n,q,a[N],sum;
inline void init(){
	n=read(); q=read();
	for (int i=1;i<=n;i++) a[i]=read(),a[i]+=a[i-1];
}
inline void solve(){
	while (q--){
		int k=read(); sum+=k;
		if (sum>=a[n]) {
			writeln(n);
			sum=0;
			continue;
		}
		int x=lower_bound(a+1,a+1+n,sum)-a;
		if (sum==a[x]){
			writeln(n-x);
		}else{
			writeln(n-x+1);
		}
	}
}
signed main(){
	init();
	solve();
	return 0;
}