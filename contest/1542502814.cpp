#include<bits/stdc++.h>
using namespace std;
#define FOR(i,x,y) for(int i=(x),i##_END=(y);i<=i##_END;i++)
#define DOR(i,x,y) for(int i=(x),i##_END=(y);i>=i##_END;i--)
#define SFOR(i,x) for(int i=0;i<(int)(x).size();i++)
#define pb push_back
#define mb make_pair
#define bug(x) cerr<<#x<<'='<<x<<' '
#define debug(x) cerr<<#x<<'='<<x<<endl
typedef long long LL;
typedef double db;
typedef unsigned long long ull;
typedef pair<int,int>PII;
template<class T> bool chk_mi(T &x,T y){return x>y?x=y,1:0;}
template<class T> bool chk_mx(T &x,T y){return x<y?x=y,1:0;}
template<class T> T Max(T x,T y){return x>y?x:y;}
template<class T> T Min(T x,T y){return x<y?x:y;}
template<const int maxn,const int maxm>struct Link_list{
	int head[maxn],To[maxm],nxt[maxm],tot;
	void init(){memset(head,tot=0,sizeof head);}
	void add(int x,int y){nxt[++tot]=head[x];head[x]=tot;To[tot]=y;}
	#define LFOR(i,x,a) for(int i=(a).head[x];i;i=(a).nxt[i])
};
int gcd(int x,int y){return !y?x:gcd(y,x%y);}
void Rd(int &res){
	res=0;char c;
	while(c=getchar(),c<48);
	do res=(res<<3)+(res<<1)+(c&15);
	while(c=getchar(),47<c);
}
#define M 100005
int lt,rt,A[M];
LL ans,dp[M],DP[M],Cnt[M];
void dfs(int l,int r,int L,int R){
	if(l>r||L>R)return;
	int mid=(l+r)>>1,res=min(mid,R);
//	printf("l=%d r=%d mid=%d res=%d\n",l,r,mid,res);
	while(lt>res){
		lt--;
		ans+=Cnt[A[lt]];
		Cnt[A[lt]]++;
	}
	while(rt<mid){
		rt++;
		ans+=Cnt[A[rt]];
		Cnt[A[rt]]++;
	}
	while(lt<res){
		Cnt[A[lt]]--;
		ans-=Cnt[A[lt]];
		lt++;
	}
	while(rt>mid){
		Cnt[A[rt]]--;
		ans-=Cnt[A[rt]];
		rt--;
	}
	DOR(i,res,L){
		if(chk_mi(dp[mid],DP[i-1]+ans))res=i;
		lt--;
		ans+=Cnt[A[lt]];
		Cnt[A[lt]]++;
	}
	dfs(l,mid-1,L,res);dfs(mid+1,r,res,R);
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	FOR(i,1,n)scanf("%d",&A[i]);
	memset(DP,63,sizeof DP);
	DP[0]=0;
	FOR(i,1,k){
		ans=0,lt=1,rt=0;
		memset(dp,63,sizeof dp);
		memset(Cnt,0,sizeof Cnt);
		dfs(1,n,1,n);
		memcpy(DP,dp,sizeof DP);
	}
	printf("%lld\n",DP[n]);
	return 0;
}