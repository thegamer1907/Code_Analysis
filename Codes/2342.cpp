#include<cstdio>
#include<cctype>
#define N 10000010
#include<algorithm>
using namespace std;
inline char gc(){
	static char now[1<<16],*S,*T;
	if (T==S){T=(S=now)+fread(now,1,1<<16,stdin);if (T==S) return EOF;}
	return *S++;
}
inline int read(){
	int x=0,f=1;char ch=gc();
	while(!isdigit(ch)) {if(ch=='-') f=-1;ch=gc();}
	while(isdigit(ch)) x=x*10+ch-'0',ch=gc();
	return x*f;
}
const int out_len=1<<16;
char obuf[out_len],*oh=obuf;
inline void write_char(char c){
	if (oh==obuf+out_len) fwrite(obuf,1,out_len,stdout),oh=obuf;
	*oh++=c;
}
template<class T>
inline void W(T x){
	static int buf[30],cnt;
	if(!x) write_char('0');else{
		if (x<0) write_char('-'),x=-x;
		for (cnt=0;x;x/=10) buf[++cnt]=x%10+48;
		while(cnt) write_char(buf[cnt--]);
	}
}
inline void flush(){fwrite(obuf,1,oh-obuf,stdout);}
int n,a[N/10],prime[N],tot,sum[N],cnt[N];bool not_prime[N];
int main(){
//	freopen("cf385c.in","r",stdin);
	n=read();for (int i=1;i<=n;++i) a[i]=read(),++cnt[a[i]];
	for (int i=2;i<=1e7;++i){
		if(!not_prime[i]) prime[++tot]=i;
		for (int j=1;prime[j]*i<=1e7;++j){
			not_prime[prime[j]*i]=1;
			if (i%prime[j]==0) break;
		}
	}
	for (int i=1;i<=tot;++i)
		for (int j=1;j*prime[i]<=1e7;++j) sum[i]+=cnt[j*prime[i]];
	for (int i=1;i<=tot;++i) sum[i]+=sum[i-1];
	int m=read();
	for (int i=1;i<=m;++i){static int l,r;
		l=lower_bound(prime+1,prime+tot+1,read())-prime-1;
		r=upper_bound(prime+1,prime+tot+1,read())-prime-1;
	//	printf("%d\n",sum[r]-sum[l]);
		W(sum[r]-sum[l]);write_char('\n');
	}flush();
	return 0;
}