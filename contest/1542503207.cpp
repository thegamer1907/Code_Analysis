#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<cstdio>
#include<queue>
#include<ctime>
#include<cmath>
using namespace std;
#define rep(i,l,r) for(int i=(l);i<=(r);++i)
#define rpe(i,r,l) for(int i=(r);i>=(l);--i)
#define rpp(i,x,e,head) for(int i=head[x];~i;i=e[i].next)
#define dyes cerr<<"yes"<<endl
#define dbg(x) cerr<<#x<<"="<<x<<endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define pts puts("")
typedef double db;
typedef long long ll;
typedef unsigned long long ull;
inline int read(){
    int f=1,x=0;char ch;
    do{ch=getchar();if(ch=='-')f=-1LL;}while(ch<'0'||ch>'9');
    do{x=x*10+ch-'0';ch=getchar();}while(ch>='0'&&ch<='9');
    return f*x;
}
inline ll readll(){
    ll f=1,x=0;char ch;
    do{ch=getchar();if(ch=='-')f=-1LL;}while(ch<'0'||ch>'9');
    do{x=x*10+ch-'0';ch=getchar();}while(ch>='0'&&ch<='9');
    return f*x;
}
template <class T> inline void chmax(T &a,T b){if(a<b) a=b;}
template <class T> inline void chmin(T &a,T b){if(a>b) a=b;}
inline void swap(int &a,int &b){int c=a;a=b;b=c;}
using namespace std;
#define mst(a,val) memset(a,val,sizeof(a))
#define pii pair<int,int>
#define piii pair<int,pair<int,int> >
#define mp(i,j) make_pair(i,j)
#define fi first
#define sc second
#define inf (0x7fffffff)
#define infl (0x3f3f3f3f3f3f3f3fLL)
#define forvec(i,j) for(vector<int>::iterator i=j.begin();i!=j.end();++i)
#define forvecv(i,j) for(vector<int>::iterator i=--j.end();i>=j.begin();--i)
//=====================head end======================//
const int N=1e5+10;
int n,k,a[N],now,nxt;
int cnt[N],nowl=1,nowr;
ll dp[2][N],ans;
inline void upd(int l,int r){
    while(nowl>l) ans+=cnt[a[--nowl]],++cnt[a[nowl]];
    while(nowl<l) --cnt[a[nowl]],ans-=cnt[a[nowl++]];
    while(nowr<r) ans+=cnt[a[++nowr]],++cnt[a[nowr]];
    while(nowr>r) --cnt[a[nowr]],ans-=cnt[a[nowr--]];
}
int sum,lf=1,ri;
inline void work(int l,int r,int L,int R){
    if(l>r) return;
    int mid=(l+r)>>1;
    dp[nxt][mid]=infl;
    int MID=0,up=min(mid,R);
    rep(i,L,up){
	upd(i,mid);
	if(dp[now][i-1]+ans<dp[nxt][mid]){
	    dp[nxt][mid]=dp[now][i-1]+ans;
	    MID=i;
	}
    }
    work(l,mid-1,L,MID);work(mid+1,r,MID,R);
}
int main(){
    n=read();k=read();rep(i,1,n) a[i]=read();
    now=0;nxt=1;mst(dp,0x3f);dp[now][0]=0;
    while(k --> 0) work(1,n,1,n),swap(now,nxt);
    printf("%lld\n",dp[now][n]);
    return 0;
}
