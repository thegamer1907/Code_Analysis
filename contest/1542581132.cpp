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

int n, k, sz;
vector < int > v[N], vn[N];

inline bool check(int pos1, int pos2) {
	int cur;
	for (int i = 0; i < k; i++) {
		cur = vn[pos1][i] + vn[pos2][i];
		if ((cur << 1) > 2)
			return 0;
	}
	return 1;
}

inline bool check(int pos1, int pos2, int pos3) {
	int cur;
	for (int i = 0; i < k; i++) {
		cur = vn[pos1][i] + vn[pos2][i] + vn[pos3][i];
		if ((cur << 1) > 3)
			return 0;
	}
	return 1;
}

inline bool check(int pos1, int pos2, int pos3, int pos4) {
	int cur;
	for (int i = 0; i < k; i++) {
		cur = vn[pos1][i] + vn[pos2][i] + vn[pos3][i] + vn[pos4][i];
		if ((cur << 1) > 4)
			return 0;
	}
	return 1;
}

int main() {
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			int x;
			cin >> x;
			v[i].pb(x);
		}
	}

	sort(v + 1, v + 1 + n);

	/*for (int i = 1; i <= n; i++) {
		for (auto j : v[i])
			cout << j << " ";
		cout << endl;
	}*/

	for (int i = 1; i <= n; i++) {
		int j = i;
		while (j < n && v[i] == v[j + 1])
			j++;
		for (int f = i, cnt = 1; f <= j && cnt <= 4; f++, cnt++)
			vn[++sz] = v[f];
		i = j;
	}

	for (int i = 1; i <= sz; i++) {
		bool ok = 1;
		for (int j = 0; j < k; j++)
			ok &= (vn[i][j] == 0);
		if (ok) {
			cout << "YES";
			return 0;
		}
	}

	for (int i = 1; i < sz; i++) {
		for (int j = i + 1; j <= sz; j++) {
			if (check(i, j)) {
				cout << "YES";
				return 0;
			}
		}
	}

	for (int i = 1; i <= sz - 2; i++) {
		for (int j = i + 1; j <= sz - 1; j++) {
			for (int x = j + 1; x <= sz; x++) {
				if (check(i, j, x)) {
					cout << "YES";
					return 0;
				}
			}
		}
	}

	for (int i = 1; i <= sz - 3; i++) {
		for (int j = i + 1; j <= sz - 2; j++) {
			for (int x = j + 1; x <= sz - 1; x++) {
				for (int y = x + 1; y <= sz; y++) {
					if (check(i, j, x, y)) {
						cout << "YES";
						return 0;
					}
				}
			}
		}
	}

	cout << "NO";

	return 0;
}
