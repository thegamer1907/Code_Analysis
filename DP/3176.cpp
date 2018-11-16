#include <cstdio>
#include <algorithm>

using namespace std;

int arr[200000];

int main() {
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

	int ans = 1;
	int lo = 0, hi = 1;
	while(lo < n && hi < n) {
		if(arr[hi] <= arr[hi - 1] * 2) hi++;
		else {
			ans = max(ans, hi - lo);
			lo = hi;
			hi++;
		}
	}
	ans = max(ans, hi - lo);

	printf("%d\n", ans);
	return 0;
}
