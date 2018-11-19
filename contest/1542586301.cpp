#include <bits/stdc++.h>

using namespace std;

const int N = 1e2 + 10;

int h, m, s, t1, t2;

int j, k;

int main () {
	  cin >> h >> m >> s >> t1 >> t2;
    j = m, k = s;
    t1 %= 12, t2 %= 12;
    h %= 12;
    m /= 5;
    s /= 5;
    for (int i = t1; i <= t1 + 11; i++) {
    	if (i % 12 == t2) return cout << "YES", 0;
    	if (i % 12 != h && i % 12 != m && i % 12 != s) continue;
    	else break;
    }
    for (int i = t1; ;) {
    	if (i % 12 == t2) return cout << "YES", 0;
    	int x = 0;
    	if (i == 0) x = 11;
    	else x = i - 1;
    	if (x == t1) break;
    	i = x;
      if (x % 12 == h || x % 12 == m || x % 12 == s) break;
    }
    cout << "NO";
    return 0;
}