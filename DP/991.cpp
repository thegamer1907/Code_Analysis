#include <iostream>

using namespace std;

int main() {
	int n, s;
	cin >> n;
	int a[111];
	int b[111];
	int ans = 0, sum = 0;
    int ans_l = 0, ans_r = 0, minus_pos = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i])
			b[i] = -1;
		else
			b[i] = 1;
		sum += b[i];
		if (sum > ans) {
			ans = sum;
			ans_l = minus_pos + 1;
			ans_r = i;
		}

		if (sum < 0) {
			sum = 0;
			minus_pos = i;
		}
	}
    ans = 0;
    for(int i = ans_l; i <= ans_r; i++){
    	a[i] = 1 - a[i];
    }
    for(int i = 0; i < n; i++){
    	ans += a[i];
    }
	cout << ans;

	return 0;
}
// ---------------------------------------------------------------------------