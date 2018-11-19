#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 1e5+5;

int n , k;
int a[5][N] , b[N] , mx = 5, ind , d[5][5];
set<int> s[5][2];

int main(){
	scanf("%d%d" , &n , &k);
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= k;j++){
			scanf("%d" , &a[j][i]);
			s[j][a[j][i]].insert(i);
			b[i] += a[j][i];
		}
		for(int j = 1;j <= k;j++){
			for(int l = j + 1;l <= k;l++){
				if(!a[j][i] and !a[l][i])d[j][l]++;
			}
		}
		if(b[i] < mx){
			mx = b[i];
			ind = i;
		}
	}
	for(int i = 1;i <= k;i++){
		if((int)s[i][0].size() == 0){
			printf("NO\n");
			return 0;
		}
	}
	if(mx == 0 or mx == 1){
		printf("YES\n");
		return 0;
	}
	if(mx == 3 or mx == 4){
		printf("NO\n");
		return 0;
	}
	if(k == 2 or k == 3){
		printf("NO\n");
		return 0;
	}
	for(int i = 1;i <= n;i++){
		if(b[i] != 2)continue;
		int j1 = -1 , j2 = -1;
		for(int j = 1;j <= k;j++){
			if(a[j][i] == 0)continue;
			if(j1 == -1)j1 = j;
			else j2 = j;
		}
		if(d[j1][j2]){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
}
