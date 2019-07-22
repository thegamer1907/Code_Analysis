#include <iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<queue>
#include<vector> 
using namespace std;
const int INF = 0x3f3f3f3f;
long long a[100010];
long long  n,m,k;
int cmp(long long a,long long b){
	return a<b;	
}
int main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	long long ans=0;
	for(long long i=1;i<=m;i++){
		scanf("%lld",&a[i]);
	}
	//sort(a+1,a+m+1,cmp);
	//int vis[100010];
	//memset(vis,0,sizeof(vis));
	long long l=0;
	long long t;
	long long  i=1;
	while(i<=m){
		t=0;
		int page=(a[i]-1-l)/k+1;
		ans++;
		while(a[i]-l<=page*k){
			i++;
			t++;
			if(i>m) break;
		}
		l+=t;
	}
	printf("%lld",ans);
}