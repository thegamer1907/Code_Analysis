#include <bits/stdc++.h>

using namespace std;

#define N 100000

int a[N + 1];
int l[N + 1];
int ans[N + 1];
set<int> s;

int main(){
	int n, m, i;

	scanf("%d%d", &n, &m);

	for (i = 1; i <= n; i++){
		scanf("%d", a + i);
	}

	for (i = 1; i <= m; i++){
		scanf("%d", l + i);
	}

	for (i = n; i >= 1; i--){
		s.insert(a[i]);
		ans[i] = s.size();
	}

	for (i = 1; i <= m; i++){
		printf("%d\n", ans[l[i]]);
	}

	return 0;
}