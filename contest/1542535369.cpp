#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

#define debug(...) fprintf(stderr, __VA_ARGS__)
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define fillchar(a, s) memset((a), (s), sizeof(a))

int h, m, s;
int t1, t2;
bool mark[43200];

int main() {
	cin >> h >> m >> s >> t1 >> t2;
	if (h == 12) {
		h = 0;
	}
	if (t1 == 12) {
		t1 = 0;
	}
	if (t2 == 12) {
		t2 = 0;
	}

	int hrhand = 3600 * h + 60 * m + s;
	int minhand = 12 * (60 * m + s);
	int sechand = 720 * s;
	t1 *= 3600;
	t2 *= 3600;

	mark[hrhand] = mark[minhand] = mark[sechand] = true;

	//t1 -> t2 possible?
	bool poss1 = true, poss2 = true;
	for (int i = t1; i != t2; i = (i + 1) % 43200) {
		if (mark[i]) {
			poss1 = false;
			break;
		}
	}

	for (int i = t1; i != t2; i = (i + 43200 - 1) % 43200) {
		if (mark[i]) {
			poss2 = false;
			break;
		}
	}

	cout << ((poss1 || poss2) ? "YES" : "NO") << endl;
}
