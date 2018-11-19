#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int ui;
typedef pair < ll, ll > pll;
typedef pair < int, ll > pil;
typedef pair < ll, int > pli;
typedef pair < int, int > pii;
typedef unsigned long long ull;

#define F first
#define S second
#define en end()
#define bg begin()
#define rev reverse
#define mp make_pair
#define pb push_back
#define y1 y1234567890
#define um unordered_map
#define all(x) x.bg, x.en
#define sqr(x) ((x) * (x))
#define sz(x) (int)x.size()

const ll inf = (ll)1e18;
const ll mod = (ll)1e9 + 7;
const double pi = acos(-1.0);
const double eps = (double)1e-9;

const int dx[] = {0, 0, 1, 0, -1};
const int dy[] = {0, 1, 0, -1, 0};

const int N = 100500;

int n, len;
string ans, s[N];

inline bool ok(int i, int j) {
	string cur = s[i] + s[j];
	for (int k = 0; k < sz(cur) - len; k++)
		if (cur.substr(k, len) == ans)
			return 1;
	return 0;
}

int main() {
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	//cin.tie(NULL);
	//cout.tie(NULL);
	//ios_base::sync_with_stdio(false);

	cin >> ans;

	cin >> n;

	len = sz(ans);

	for (int i = 1; i <= n; i++)
		cin >> s[i];

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			if (ok(i, j)) {
				cout << "YES";
				return 0;
			}

	cout << "NO";

	return 0;
}
