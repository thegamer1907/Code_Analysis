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
typedef pair <ll, ll> pll;

const int MAX_N = 50 + 10;
ll F[MAX_N];

int f(int n, ll k) {
	k %= F[n] / 2 + 1;
	return k ? f(n - 1, k) : n;
}

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

	for(int i = 1; i < MAX_N; i++)
		F[i] = 2 * F[i - 1] + 1;

	int n; ll k;
	cin >> n >> k;
	cout << f(n, k) << endl;

	return 0;
}
