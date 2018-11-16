#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef long double LD;
char s1[15], s2[15];
int x = 0, n = 0;
LD ans = 0;
void dfs(int i, int p, LD prob){
	if(i == n+1){
		if(p == x) ans += prob;
	}
	else{
		if(s2[i] == '+') dfs(i+1, p+1, prob);
		else if(s2[i] == '-') dfs(i+1, p-1, prob);
		else{
			dfs(i+1, p+1, prob*0.5);
			dfs(i+1, p-1, prob*0.5);
		}
	}
}
int main(){
	scanf("%s", s1+1);
	scanf("%s", s2+1);

	n = strlen(s1+1);
	for(int i=1;i<=n;i++){
		if(s1[i] == '+') x++;
		else x--;
	}
	dfs(1, 0, 1);
	printf("%.20Lf\n", ans);
}