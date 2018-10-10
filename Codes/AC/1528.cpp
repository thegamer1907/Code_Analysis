#include <bits/stdc++.h>
using namespace std;
#define maxn 100010
#define maxm 
#define mod 
#define inf 0x3f3f3f3f
typedef long long ll;
int a[maxn], b[maxn];
int main()
{
	int n, m, s;
	
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	} 
	int l = 0, r = n;
	while (l <= r) {
		int mid = (l + r) >> 1;
		for (int i = 1; i <= n; i++) {
			b[i] = a[i] + i * mid;
		}
		s = 0;
		sort(b + 1, b + n + 1);
		for (int i = 1; i <= mid; i++) {
			s += b[i];
			if (s > m) {
				break;
			}
		}
		if (s > m) {
			r = mid - 1;
		} else {
			l = mid + 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		b[i] = a[i] + i * r;
	}
	s = 0;
	sort(b + 1, b + n + 1);
	for (int i = 1; i <= r; i++) {
		s += b[i];
	}
	printf("%d %d\n", r, s);
}