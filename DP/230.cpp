#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e2 + 1;
int a[MAXN], b[MAXN];

int main() {
	int n, m;
	
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", a + i);
	sort(a, a + n);

	scanf("%d", &m);
	for(int i = 0; i < m; i++)
		scanf("%d", b + i);
	sort(b, b + m);

	int ans = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(abs(a[i] - b[j]) <= 1) {
				ans++;
				b[j] = 5 + MAXN;
				break;
			}

	printf("%d\n", ans);
	return 0;
}