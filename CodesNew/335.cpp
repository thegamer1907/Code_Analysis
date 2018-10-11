#include<iostream> 

int main() {
	int n, t;
	std::cin >> n >> t;
	int a[n + 1];
	int i = 1, sum = 0, ans = 0;
	for (int j = 1; j <= n; ++j) {
		std::cin>>a[j];
		sum += a[j];
		if (sum > t) {
			sum -= a[i];
			i++;
		}
		ans = std::max(ans, j - i + 1);
	}
	std::cout << ans;
}	