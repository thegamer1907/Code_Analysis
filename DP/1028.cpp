#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define mem(a,x) memset(a,x,sizeof(a))

int dp[105];
int a[105];

int main(){
	int n,ans,maxx;
	while(scanf("%d", &n) != EOF){
		ans = 0;
		for(int i = 1; i <= n; i++){
			scanf("%d",&a[i]);
			if(a[i] == 1){
				a[i] = -1;
				ans++;
			}else{
				a[i] = 1;
			}
		}
		dp[1] = a[1];
		maxx = dp[1];
		for(int i = 2; i <= n; i++){
			dp[i] = max(dp[i - 1], 0) + a[i];
			maxx = max(maxx, dp[i]);
		}
		printf("%d\n",ans + maxx);
	}
	return 0;
}