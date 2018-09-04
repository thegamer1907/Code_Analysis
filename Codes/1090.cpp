#include <bits/stdc++.h>
using namespace std;

#define pii pair <long long, long long>

const long long MAXN = 1e5 + 5;
long long n, d, sum, ans;
pii Arr[MAXN];

int main() {
	cin >> n >> d;
	for (long long i = 0; i < n; i++)
		cin >> Arr[i].first >> Arr[i].second;
	sort(Arr, Arr + n);
	long long L = 0, R = 0;
	while (R < n && Arr[R].first - Arr[L].first < d)
		sum += Arr[R++].second;
	ans = sum;
	while (R < n) {
		sum -= Arr[L++].second;
		while (R < n && Arr[R].first - Arr[L].first < d)
			sum += Arr[R++].second;
		ans = max(ans, sum);
	}
	cout << ans;
}