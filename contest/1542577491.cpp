#include<bits/stdc++.h>
#define sqr(x) ((x)*(x))
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define ld long double
#define vi vector<int>
#define HEAP(...) priority_queue<__VA_ARGS__ >
#define heap(...) priority_queue<__VA_ARGS__,vector<__VA_ARGS__ >,greater<__VA_ARGS__ > > 
#define pii pair<int,int> 
#define pb push_back
#define mp make_pair
#define debuge cerr<<"isok"<<endl
#define debug(x) cerr<<#x<<"="<<x<<endl
#define dprintf(...) fprintf(stderr,__VA_ARGS__)
#define SS second
#define FF first
#define ls (k<<1)
#define rs (k<<1|1)
#define clr(a,x) memset(a,x,sizeof(a))
#define cpy(a,x) memcpy(a,x,sizeof(a))
#define file(x) freopen(x".in","r",stdin),freopen(x".out","w",stdout)
#define SZ(x) ((int)x.size())
using namespace std;
template<class T> inline void gmin(T &x,const T &y){if(x>y) x=y;}
template<class T> inline void gmax(T &x,const T &y){if(x<y) x=y;}
const int BufferSize=1<<16;
char buffer[BufferSize],*Bufferhead,*Buffertail;
bool Terminal;
inline char Getchar(){
	if(Bufferhead==Buffertail){
		int l=fread(buffer,1,BufferSize,stdin);
		if(!l){Terminal=1;return 0;}
		Buffertail=(Bufferhead=buffer)+l;
	}
	return *Bufferhead++;
}
template<class T>inline bool read(T &x){
	x=0;char c=Getchar(),rev=0;
	while(c<'0'||c>'9'){rev|=c=='-';c=Getchar();if(Terminal)return 0;}
	while(c>='0'&&c<='9') x=x*10+c-'0',c=Getchar();
	if(c=='.'){
		c=Getchar();double t=0.1;
		while(c>='0'&&c<='9') x=x+(c-'0')*t,c=Getchar(),t=t/10;
	}
	x=rev?-x:x;
	return 1;
}
template<class T1,class T2> inline bool read(T1 &x,T2 &y){return read(x)&read(y);}
template<class T1,class T2,class T3> inline bool read(T1 &x,T2 &y,T3 &z){return read(x)&read(y)&read(z);}
template<class T1,class T2,class T3,class T4> inline bool read(T1 &x,T2 &y,T3 &z,T4 &w){return read(x)&read(y)&read(z)&read(w);}
inline bool reads(char *x){
	char c=Getchar();
	while(c<33||c>126){c=Getchar();if(Terminal)return 0;}
	while(c>=33&&c<=126) (*x++)=c,c=Getchar();
	*x=0;return 1;
}
template<class T>inline void print(T x,const char c='\n'){
	if(!x){putchar('0');putchar(c);return;}
	if(x<0) putchar('-'),x=-x;
	int m=0,a[20];
	while(x) a[m++]=x%10,x/=10;
	while(m--) putchar(a[m]+'0');
	putchar(c);
}
//--------------------------------head---------------------------------------------

const ll inf=0x3f3f3f3f3f3f3f3f;
const int N=100005,M=100005,mod=1e9+7;
template<class T,class S> inline void ch(T &x,const S y){x=(x+y)%mod;}
inline int exp(int x,int y,const int mod=::mod){
	int ans=1;
	while(y){
		if(y&1) ans=(ll)ans*x%mod;
		x=(ll)x*x%mod;y>>=1;
	}return ans;
}

int n,k,a[N],sum[N],from[N];
int vis[N];
ll dp[2][N];
vi b[N];

inline int get(int i,int r)noexcept{
	int k=a[i];
	if(~vis[k]){++vis[k];return vis[k];}
	return vis[k]=upper_bound(b[k].begin(),b[k].end(),r)-lower_bound(b[k].begin(),b[k].end(),i+1);
//	return vis[k]=upper_bound(rk+st[k],rk+en[k]+1,r)-lower_bound(rk+st[k],rk+en[k]+1,i+1);
}

inline void make(ll *f,int *dp,int l,int x,int y)noexcept{
	gmin(y,l-1);
	ll now=0,mn=f[y];
	dp[l]=y;
	for(int i=y-1;i>=x;i--){
		now+=get(i+1,l);
		if(f[i]+now<mn){mn=f[i]+now,dp[l]=i;}
	}
	for(int i=x;i<=y;i++) vis[a[i]]=-1;
}
inline void solve(ll *f,int *dp,int l,int r,int x,int y){
	if(l>r||x>y) return;
	if(l==r){
		make(f,dp,l,x,y);
		return;
	}
	int mid=l+r>>1;
	make(f,dp,mid,x,y);
	solve(f,dp,l,mid-1,x,dp[mid]);
	solve(f,dp,mid+1,r,dp[mid],y);
}

inline bool cmp(int x,int y){
	return mp(a[x],x)<mp(a[x],y);
}

int main(){
#ifdef rqgao2014
	freopen("input.txt","r",stdin);
#endif
clr(vis,-1);
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[a[i]].pb(i);
	}
	for(int i=1;i<=n;i++) dp[0][i]=inf;
	for(int i=1;i<=k;i++){
		solve(dp[i-1&1],from,1,n,0,n);
		clr(sum,0);
		ll now=0;
		for(int j=1,last=0;j<=n;j++){
			now+=sum[a[j]];sum[a[j]]++;
			while(last<from[j]){
				last++;
				sum[a[last]]--;
				now-=sum[a[last]];
			}
			dp[i&1][j]=dp[i-1&1][from[j]]+now;
		}
//		cout<<dp[i&1][n]<<endl;
	}
	cout<<dp[k&1][n]<<endl;
	return 0;
}