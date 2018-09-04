/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
#define pb push_back
#define mp make_pair
#define Size(x) ((int)(x).size())
#define Precision(i) cout << fixed << setprecision(i)

typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;

int sum(int n) {
	if(n < 10)
		return n;
	return sum(n / 10) + (n % 10);
}

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0);

	int k;
	cin >> k;
	int ans = 1;
	while(k) {
		ans++;
		if(sum(ans) == 10)
			k--;
	}
	cout << ans << endl;

	return 0;
}
