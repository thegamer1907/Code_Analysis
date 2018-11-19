#include<cstdio>  
#include<cstring>  
#include<cstdlib>  
#include<algorithm>  
#include<functional>  
#include<iostream>  
#include<cmath>  
#include<cstring>  
#include<cctype>  
#include<ctime>  
using namespace std;  
#define For(i,n) for(int i=1;i<=n;i++)  
#define Fork(i,k,n) for(int i=k;i<=n;i++)
#define ForkD(i,k,n) for(int i=n;i>=k;i--)
#define Rep(i,n) for(int i=0;i<n;i++)  
#define Forp(x) for(int p=pre[x];p;p=next[p])  
#define MAXN (100020+10)  
typedef long long ll;
int a[MAXN];  
int b[MAXN]={0};  
long long Ti2=0;  
int n,m;
int ll1=1,rr1=0;
ll calc(int ll2,int rr2) {
    if (ll1<ll2) Fork(j,ll1,ll2-1) Ti2-=(long long)b[a[j]]*(b[a[j]]-1)/2,b[a[j]]--,Ti2+=(long long)b[a[j]]*(b[a[j]]-1)/2;  
    if (ll2<ll1) Fork(j,ll2,ll1-1) Ti2-=(long long)b[a[j]]*(b[a[j]]-1)/2,b[a[j]]++,Ti2+=(long long)b[a[j]]*(b[a[j]]-1)/2;  
    if (rr1<rr2) Fork(j,rr1+1,rr2) Ti2-=(long long)b[a[j]]*(b[a[j]]-1)/2,b[a[j]]++,Ti2+=(long long)b[a[j]]*(b[a[j]]-1)/2;  
    if (rr2<rr1) Fork(j,rr2+1,rr1) Ti2-=(long long)b[a[j]]*(b[a[j]]-1)/2,b[a[j]]--,Ti2+=(long long)b[a[j]]*(b[a[j]]-1)/2;  
    ll1=ll2,rr1=rr2;
//    cout<<ll1<<' '<<rr1<<endl;
    return Ti2;
}
#define MAXK (30)
ll f[MAXN][MAXK];
void dfs(int k,int l,int r,int ll1,int rr1) {
	int i=(l+r)/2;
	f[i][k]=1e16;
	int LL=max(ll1,k-1),RR=min(rr1,i-1);
	int t=-1;
	Fork(j,LL,RR) {
		if (f[i][k]> f[j][k-1] + calc(j+1,i)) t=j;
		f[i][k] = min(f[i][k], f[j][k-1] + calc(j+1,i));
	}
	int m=i;
	if (l<m) dfs(k,l,m-1,ll1,t);
	if (m+1<=r) dfs(k,m+1,r,t,rr1);
}
int main()  
{  
//    freopen("d.out","r",stdin);  
//  freopen("f.out","w",stdout);  
    scanf("%d%d",&n,&m);  
    For(i,n) scanf("%d",&a[i]);
    For(i,n) For(j,m) f[i][j]=1e15;
//    n=1e5;For(i,n) a[i]=1;m=20;
    
	For(i,n) f[i][1]=calc(1,i);

    Fork(k,2,m) {
    	bool fl=0;
   		dfs(k,k,n,1,n);
	}
	cout<<f[n][m]<<endl;
    return 0;  
}  