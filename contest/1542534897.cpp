#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>

#define INF 0x3f3f3f3f
#define INF0 0x7fffffff
#define eps 1e-5
typedef unsigned long long ull;
typedef long long ll;

using namespace std;

double h, m, s, t1, t2;

int main() {
	while (cin >> h >> m >> s >> t1 >> t2) {
		m += s / 60.0;
		h += m / 60.0;
		h *= 5.0;
		if (m >= 60.0)m -= 60.0;
		if (h >= 60.0)h -= 60.0;
		t1 *= 5.0;
		t2 *= 5.0;
		int it1 = t1;
		int it2 = t2;
		if (it1 > it2) {
			int tmp = it1;
			it1 = it2;
			it2 = tmp;
		}
		bool flag0 = true;
		for (int i = it1; i < it2; i++) {
			if ((int)floor(h) == i || (int)floor(m) == i || (int)floor(s) == i)flag0 = false;
		}
		bool flag1 = true;
		for (int i = it2; i < 60; i++) {
			if ((int)floor(h) == i || (int)floor(m) == i || (int)floor(s) == i)flag1 = false;
		}
		for (int i = 0; i < it1; i++) {
			if ((int)floor(h) == i || (int)floor(m) == i || (int)floor(s) == i)flag1 = false;
		}
		if (flag0 || flag1)cout << "yes\n";
		else cout << "no\n";
	}

	//system("pause");
}