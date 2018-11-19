#include <bits/stdc++.h>
#define MOD 1000000007
#define INF 0x3f3f3f3f
#define EPS 1e-10
#define setNil(x) memset((x),0,sizeof(x))
#define setINF(x) memset((x),63,sizeof(x))
#define setNegINF(x) memset((x),192,sizeof(x)) //NegINF=-INF-1
#define setNeg1(x) memset((x),255,sizeof(x))
using namespace std;
typedef long long ll;
int n,K,cx,cy,a[100005],c[100005];
ll dp[22][100005],v;
ll calc(int x,int y){
	while(cx<x)v-=--c[a[cx++]];
	while(cx>x)v+=c[a[--cx]]++;
	while(cy<y)v+=c[a[++cy]]++;
	while(cy>y)v-=--c[a[cy--]];
	return v;
}
void work(int k,int l,int r,int ml,int mr){
	if(l>r)return;
	int mid=(l+r)>>1,pos=0;
	dp[k][mid]=1e18;
	for(int i=ml;i<=min(mr,mid);i++){
		if(dp[k-1][i]+calc(i+1,mid)<dp[k][mid]){
			dp[k][mid]=dp[k-1][i]+calc(i+1,mid);
			pos=i;
		}
	}
	work(k,l,mid-1,ml,pos);
	work(k,mid+1,r,pos,mr);
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>K;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)dp[0][i]=1e18;
	for(int i=1;i<=K;i++){
		cx=1,cy=0,v=0;
		setNil(c);
		work(i,1,n,0,n-1);
	}
	cout<<dp[K][n]<<endl;
	return 0;
}