//#pragma comment(linker, "/STACK:102400000,102400000")
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<iostream>
#include<set>
#include<cctype>
#include<bitset>
#include<stack>
#include<queue>
#define reg int
#define ShimaKZ 404 Not Found
#define dec(a) memset(a,-1,sizeof(a))
#define mem(a) memset(a,0,sizeof(a))
#define debug(x) cerr<<#x<<'='<<x<<endl
#define bug() cerr<<"Surprise MotherFucker"<<endl
#define FOR(i,a,b) for(reg i=(a),i##_end_=(b);i<=i##_end_;++i)
#define SFOR(i,a,b) for(reg i=(a),i##_end_=(b);i<i##_end_;++i)
#define DOR(i,a,b) for(reg i=(a),i##_end_=(b);i>=i##_end_;--i)
#define SDOR(i,a,b) for(reg i=(a)-1,i##_end_=(b);i>=i##_end_;--i)
#define y0 jsuss
#define y1 juiue
#define fi first
#define se second
typedef long long ll;
template<class _,class __> bool checkmax(_ &a,__ b) {return a<b?a=b,true:false;}
template<class _,class __> bool checkmin(_ &a,__ b) {return a>b?a=b,true:false;}
using namespace std;
#define M 100086
int n,k;
int A[M];
ll dp[M][25];
int cnt[M];
void Merge(int l,int r,int L,int R,int x,ll sum){
	if(l>r)return;
	int m=(l+r)>>1,mid=-1;
	int pos=min(m,R);
	FOR(i,l,m)sum+=cnt[A[i]]++;
	FOR(i,L,pos){
		cnt[A[i]]--;
		sum-=cnt[A[i]];
		if(checkmin(dp[m][x],sum+dp[i][x-1]))mid=i;
	}
	FOR(i,l,m)sum-=--cnt[A[i]];
	FOR(i,L,pos)sum+=cnt[A[i]]++;
	Merge(l,m-1,L,mid,x,sum);
	SFOR(i,L,mid)sum-=--cnt[A[i]];
	FOR(i,l,m)sum+=cnt[A[i]]++;
	Merge(m+1,r,mid,R,x,sum);
	SFOR(i,L,mid)cnt[A[i]]++;
	FOR(i,l,m)cnt[A[i]]--;
}
int main(){
	cin>>n>>k;
	FOR(i,1,n)scanf("%d",&A[i]);
	mem(cnt);
	dp[0][0]=0;
	FOR(i,1,n)dp[i][0]=dp[i-1][0]+cnt[A[i]]++;
	SFOR(i,1,k){
		mem(cnt);
		FOR(j,1,n)dp[j][i]=1e15;
		Merge(1,n,1,n,i,0);
	}
	printf("%I64d\n",dp[n][k-1]);
	return EXIT_SUCCESS;
}
