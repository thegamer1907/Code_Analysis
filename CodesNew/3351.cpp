#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[105];

int main()
{
	int n, m;
	ignore = scanf("%d %d", &n, &m);
	
	int mx = 0;
	int mn;
	
	for (int i = 0; i < n; i++) {
		ignore = scanf("%d", a + i);
		mx = max(a[i], mx);
	}
	
	for (mn = mx; mn <= 100000; mn++) {
		int l = m;
		for (int i = 0; i < n; i++) {
			l -= mn - a[i];
		}
		if (l <= 0) break;
	}
	
	mx += m;
	printf("%d %d", mn, mx);
}
