#include<bits/stdc++.h>
using namespace std;
template<class T> inline bool chkmax(T& a,T b){return a<b?a=b,1:0;}
template<class T> inline bool chkmin(T& a,T b){return a>b?a=b,1:0;}
int n,k,cnt[10],sum;
bool book[(1<<4)+10];
int main(){
#ifndef ONLINE_JUDGE
	freopen("exec.in","r",stdin);
	freopen("exec.out","w",stdout);
#endif
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++){
		int s=0,x;
		for(int j=1;j<=k;j++){
			scanf("%d",&x);
			if(x) s|=(1<<(j-1));
		}
		book[s]=1;
	}
	for(int S=1;S<(1<<16);S++){
		memset(cnt,0,sizeof cnt); sum=0;
		for(int i=0;i<16;i++) if(S&(1<<i)){
			if(!book[i]) goto tag;
			++sum;
			for(int j=1;j<=4;j++) if(i&(1<<(j-1))) ++cnt[j];
		}
		for(int i=1;i<=4;i++) if(cnt[i]>sum/2) goto tag;
		puts("YES"),exit(0);
		tag:;
	}
	puts("NO");
	return 0;
}
