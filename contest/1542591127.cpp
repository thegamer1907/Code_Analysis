
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<vector>
#include<queue>
#include<deque>
#include <iomanip>
#include<bitset>
#include<functional>
#include<set>
using namespace std;
typedef long long ll;
const int MAXN = 1e3 + 10;
int n;
char p[5];
char s[MAXN][5];
int main() {
	while (cin >> p) {
		int t0, t1;
		t0 = t1 = 0;
		cin >> n;
		bool ff = false;
		for (int i = 1; i <= n; ++i) {
			cin >> s[i];
			if (s[i][0] == p[0] && s[i][1] == p[1])ff = true;
			else {
				if (s[i][0] == p[1])t1 = 1;
				if (s[i][1] == p[0])t0 = 1;
			}
		}
		if ((t0&&t1) || ff) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
