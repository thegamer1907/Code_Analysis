#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

const int N = 123;

int a[N], cnt[3 * N];

int main() {

	int n; scanf("%d", &n);

	char last = '@';
	
	int ans = 0;
	
	for (int i = 0; i < n; ++i) {
		char x; scanf(" %c", &x);
		if (x == last) ++ans;
		else last = x;
	}

	printf("%d\n", ans);

	return 0;
}