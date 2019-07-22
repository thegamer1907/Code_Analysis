#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<math.h>
#include<queue>
#include<stack>
#define fo(i,a,b) for(int i=a;i<=b;i++)
#define fod(i,a,b) for(int i=a;i>=b;i--)
#define me0(a) memset(a,0,sizeof(a))
#define me1(a) memset(a,-1,sizeof(a))
#define op freopen("C:in.txt", "r", stdin)
using namespace std;

const int maxn = 1e6 + 10;
const int INF = 0x3f3f3f3f;
typedef long long LL;

void read(int &val) {int x = 0; int bz = 1; char c;for (c = getchar(); (c<'0' || c>'9') && c != '-'; c = getchar());if (c == '-') {bz = -1; c = getchar();}for (; c >= '0' && c <= '9'; c = getchar()) x = x * 10 + c - 48;val = x * bz;}

const LL mod=1e9+7;
const double PI=acos(-1);

LL n,m,k;
LL a[maxn];

int solve(int l,int r,int pos){
	int cnt=0;
	while(a[pos]>=l&&a[pos]<=r) pos++,cnt++;
	return cnt;
	
}

int main(){
	//op;
	
	scanf("%lld%lld%lld",&n,&m,&k);
	
	fo(i,1,m){
		scanf("%lld",&a[i]);
	}
	
	LL pos=1,l=1,r=k,ans=0;
	int del=0;
	while(pos<=m){
		int cnt=solve(l,r,pos);
		pos+=cnt;
		if(cnt){
			r=r+cnt;
			del+=cnt;
			ans++;
		}
		else{
			l=a[pos];
			int t=(a[pos]-del)%k;
			if(t==0) t=k;
			r=a[pos]+(k-t);
		}
		//cout<<l<<"  "<<r<<"  "<<"  "<<pos<<"  "<<ans<<endl;
	}
	printf("%d\n",ans);
	return 0;
}