#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#include <cmath>

using namespace std;

bool check(int x , int y)
{
	while(x > 0 && y > 0){
		if(x % 2 + y % 2 > 1) return 0;
		x >>= 1 , y >>= 1;
	}
	return 1;
}
int vis[50] , a[50];
int main()
{
	int t[5];
	t[1] = 1 , t[2] = 2 , t[3] = 4 , t[4] = 8;
	int n , k , flag = 0;
	scanf("%d %d",&n , &k);
	for(int i = 1 ; i <= n ; i++){
		int sum = 0 , ans = 0 , ant = 0;
		for(int j = k ; j >= 1 ; j--){
			scanf("%d",&a[j]);
			sum += a[j] * t[j];
		}
		vis[sum] = 1;
	}
	int b[30] , cnt = 0;
	for(int i = 0 ; i <= 30 ; i++){
		if(vis[i] == 1) b[++cnt] = i;
	}
	for(int i = 1 ; i <= cnt ; i++){
		for(int j = 1 ; j <= cnt ; j++){
			if(check(b[i] , b[j])) flag = 1;
		}
	}
	if(flag == 0) printf("NO\n");
	else printf("YES\n");
}