#include <bits/stdc++.h>
using namespace std;
int n, k;
bool s[1 << 5];
int main(){
	scanf("%d%d", &n, &k);
	int x, d;
	for(int i = 1; i <= n; i ++){
		d = 0;
		for(int j = 1; j <= k; j ++)
			scanf("%d", &x), d = (d << 1) | x;
		s[d] = 1;
	}
	
	bool flag = 0;
	for(d = 0; d < (1 << k); d ++)
		for(x = 0; x < (1 << k); x ++)
			if((d & x) == 0 && s[d] && s[x])
				flag = 1;
	if(flag) printf("YES\n");
	else printf("NO\n");
	
	return 0;
} 