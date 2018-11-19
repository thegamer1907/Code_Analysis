/*#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")*/
#include<bits/stdc++.h>
#define ll long long
#define inf 1000000005
#define put putchar('\n')
#define F(i,a,b) for (int i=(a);i<=(b);i++)
#define D(i,a,b) for (int i=(a);i>=(b);i--)
#define go(i,t) for (int i=head[t];i;i=Next[i])
#define sqr(x) ((x)*(x))
#define re register
#define mp make_pair
#define fi first
#define se second
#define pa pair<int,int>
#define pb push_back
#define be begin()
#define en end()
#define ret return puts("-1"),0;
#define mod 1000000007
#define N 500055
#define int ll
using namespace std;
inline char gc(){
    static char buf[100000],*p1=buf,*p2=buf;
    return p1==p2&&(p2=(p1=buf)+fread(buf,1,100000,stdin),p1==p2)?EOF:*p1++;
}
#define gc getchar
inline int read(){char c=getchar();int tot=1;while ((c<'0'|| c>'9')&&c!='-') c=getchar();if (c=='-'){tot=-1;c=getchar();}
int sum=0;while (c>='0'&&c<='9'){sum=sum*10+c-'0';c=getchar();}return sum*tot;}
inline void wr(ll x){if (x<0) {putchar('-');wr(-x);return;}if(x>=10)wr(x/10);putchar(x%10+'0');}
inline void wrn(ll x){wr(x);put;}inline void wri(int x){wr(x);putchar(' ');}
inline void wrn(int x,int y){wri(x);wrn(y);}inline void wrn(int a,int b,int c){wri(a);wrn(b,c);}
int n,m,f[2][N],to[N],a[N],k;
void solve(int l,int r,int s,int t,int ans){
	if (l>r) return;
	int mid=(l+r)>>1,x=0;
	F(i,l,mid) ans+=to[a[i]]++;
	F(i,s,min(t,mid)){
		ans-=--to[a[i]];
		if (ans+f[0][i]<f[1][mid]||x==0) x=i,f[1][mid]=ans+f[0][i]; 
	}
	F(i,s,min(t,mid)) ans+=to[a[i]]++;
    F(i,l,mid) ans-=--to[a[i]];
    solve(l,mid-1,s,x,ans);
    F(i,s,x-1) ans-=--to[a[i]];
    F(i,l,mid) ans+=to[a[i]]++;
    solve(mid+1,r,x,t,ans);
    F(i,s,x-1) to[a[i]]++;
    F(i,l,mid) to[a[i]]--;
}
signed main(){
	n=read();k=read();
	F(i,1,n) a[i]=read();
	f[0][0]=0;
	F(i,1,n) f[0][i]=f[0][i-1]+to[a[i]]++;
	F(i,1,k-1){
		memset(to,0,sizeof(to));
		solve(1,n,1,n,0);
		F(j,1,n) f[0][j]=f[1][j],f[1][j]=0;
	}
	wrn(f[0][n]);
	return 0;
}