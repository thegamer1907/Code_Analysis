#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<string>
#include<iostream>
using namespace std;
#define MID(x,y) ((x+y)>>1)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int N=2e5+7;

int maps[N][6];
int vis[N];

int main()
{
	//freopen("f:/input.txt", "r", stdin);
	int i,j,k,n,q,f;

	scanf("%d%d", &n,&k);
	CLR(maps,0);
	CLR(vis,0);
	for(i=1;i<=n;++i) {
		q=0;
		for(j=0;j<k;++j) {
			scanf("%d",&maps[i][j]);
			if(maps[i][j]==1) {
				q|=(1<<j);
			}
		}
		vis[q]=1;
	}
	f = 0;
	for(i=0;i<(1<<k);++i) {
		for(j=0;j<(1<<k);++j) {
			if(vis[i]&&vis[j]&&((i&j)==0)){
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
	
}