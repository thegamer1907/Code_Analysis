#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include<list>
#include <bitset>
#include <climits>
#include <algorithm>
#define gcd(a,b) __gcd(a,b)
#define FIN	freopen("input.txt","r",stdin)
#define FOUT 	freopen("output.txt","w",stdout)
typedef long long LL;
const LL mod=1e9+7;
const int INF=0x3f3f3f3f;
const double PI=acos(-1.0);
using namespace std;
int a[20][5]; 
int vis[20];
int tt[5];
int main (){
	for (int i=0;i<=16;i++){
		int temp=i;
		for (int j=0;j<4;j++){
			a[i][j]=temp%2;
			temp/=2;
		}
	}
	int n,k;
	while (scanf ("%d%d",&n,&k)!=EOF){
		memset(vis,0,sizeof(vis));
		for (int i=0;i<n;i++){
			for (int j=0;j<k;j++){
				scanf ("%d",&tt[j]);
			}
			for (int j=0;j<=16;j++){
				int flag=0;
				for(int l=0;l<k;l++){
					if (a[j][l]!=tt[l]){
						flag=1;
						break;
					}
				}
				if (!flag){
					vis[j]=1;
					break;
				}
			}
		}
		if (vis[0]){
			printf ("YES\n");
			continue;
		}
		int sum=0;
		for (int i=0;i<=16;i++) if (vis[i]) sum++;
		for (int i=0;i<16;i++){
			for (int j=i+1;j<=16;j++){
				if (vis[i]&&vis[j]){
					int flag=0;
					int ss=0; 
					for (int l=0;l<k;l++){
						if (a[i][l]==0) ss++;
						if (a[i][l]&&a[j][l]){
							flag=1;
							break;
						}
					}
					if (!flag){
						printf ("YES\n");
						goto F;
					}
				}
			}
		}
		printf ("NO\n");
		F : ;
	}
	return 0;
}