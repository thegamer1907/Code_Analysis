#include <bits/stdc++.h>
using namespace std;

//#define success puts("YES");exit(0);
int h, m, s, t1, t2;

set<int> seta;
int main() {
	cin >> h >> m >> s >> t1 >> t2;
//	scanf("%d%d", &n, &k);
	if (t1 > t2)
		swap(t1, t2);
	t1 *= 3600;
	t2 *= 3600;

	if (h == 12)
		h = 0;
	int shand = s;
	shand *= 60 * 12;
	int mhand = m * 60 + s;
	mhand *= 12;
	int hhand = h * 60 * 60 + m * 60 + s;
	hhand *= 1;

	seta.insert(shand);
	seta.insert(mhand);
	seta.insert(hhand);
	seta.insert(t1);
	seta.insert(t2);

	auto it = seta.find(t1);

	it++;
	if (*it == t2) {
		cout << "YES" << endl;
		exit(0);
	}

	it--;

	if (it == seta.begin()) {
		it = seta.end();
	}

	it--;

	if (*it == t2) {
		cout << "YES" << endl;
		exit(0);
	}
	cout << "NO" << endl;
	return 0;
}
//