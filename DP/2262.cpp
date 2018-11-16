#include <cstdio>
int main (){
	bool cnt[100001] = {};
	int n, m, q;
	int a[100001], l[100002];
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	l[n + 1] = 0;
	for (int i = n; i >= 1; i--){
		l[i] = l[i + 1];
		if (!cnt[a[i]]){
			cnt[a[i]] = true;
			l[i]++;
		}
	}
	for (int i = 0; i < m; i++){
		scanf("%d", &q);
		printf("%d\n", l[q]);
	}
	return 0;
}