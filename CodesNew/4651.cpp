#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;
int num[500005];
int n;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
	}
	sort(num, num + n);
	int l = n / 2, r = n - 1;
	int ans;
	while (l <= r) {
		int mid = (l + r) / 2;
		if (num[mid] >= 2 * num[0]) {
			ans = mid;
			r = mid - 1;
		}
		else	l = mid + 1;
	}
	int k = 0;
	//printf("%d\n",ans);
	int count = 0;
	for (int i = ans; i<n; i++){
		if (k == ans)
			break;
		if (num[i] >= 2 * num[k]){
			count++;
			k++;
		}
	}
	printf("%d\n", n - count);

	return 0;
}
