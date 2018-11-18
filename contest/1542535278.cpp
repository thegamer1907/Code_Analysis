/**
 * @author	Moe_Sakiya    	i@tun.moe
 * @date    	2018-02-05 14:21:44
 *
 */

#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <map>
#include <vector>
#include <stack>
#include <queue>

#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(void) {
	int h, m, s, t1, t2, ans;
	while (cin >> h >> m >> s >> t1 >> t2) {
		//init
		ans = 0;
		if (t1 > t2)
			swap(t1, t2);
		if (h >= t1 && h <= t2)
			ans++;
		if (h == t2 && (m != 0 || s != 0))
			ans--;
		if (m >= t1 * 5 && m <= t2 * 5)
			ans++;
		if (m == t2 * 5 && s != 0)
			ans--;
		if (s >= t1 * 5 && s <= t2 * 5)
			ans++;
		if (ans == 3 || ans == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}