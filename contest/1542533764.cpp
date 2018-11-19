#include<bits/stdc++.h>
#define N 222222
#define M 1000000007
#define MP make_pair
#define PB push_back
#define PII pair<int,int>
#define VI vector<int>
#define X first
#define Y second
#define CL(a) memset(a,0,sizeof a) 
#define fr(i,n) for(int i=1;i<=n;i++)
#define rd(x) scanf("%d",&x)
using namespace std;
int n,k,V,i,j,x,cnt[55];
int main(){
	scanf("%d%d",&n,&k);
	fr(i,n){
		V=0;
		fr(j,k){
			scanf("%d",&x);
			if(x)V+=(1<<(j-1));
		}
		cnt[V]++;
	}
	for(i=0;i<16;i++)for(j=0;j<16;j++)if(cnt[i]&&cnt[j]&&((i&j)==0))return puts("YES"),0;
	puts("NO");
}