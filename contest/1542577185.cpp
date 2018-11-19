#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int maxn = 1e5+10;
int Map[maxn][5];
int n,k,x;
int num[20];
int main(){
	scanf("%d %d",&n,&k);
	for(int i = 0; i < 20; i++)
		num[i] = 0;
	for(int i = 1; i <= n; i++){
		int temp = 0;
		for(int j = 1; j <= k; j++){
			scanf("%d",&x);
			temp = temp*2+x;
		}
		num[temp] = 1;
	}
	if(num[0])
		puts("YES");
	else if(num[1] && (num[2] || num[4] || num[6] || num[8] || num[10] || num[12] || num[14]))
		puts("YES");
	else if(num[2] && (num[4] || num[5] || num[8] || num[9] || num[12] || num[13]))
		puts("YES");
	else if(num[3] && (num[4] || num[8] || num[12]))
		puts("YES");
	else if(num[4] && (num[8] || num[9] || num[10] || num[11]))
		puts("YES");
	else if(num[5] && (num[8] || num[10]))
		puts("YES");
	else if(num[6] && (num[8] || num[9]))
		puts("YES");
	else if(num[7] && (num[8]))
		puts("YES");
	else
		puts("NO");
	return 0;
}