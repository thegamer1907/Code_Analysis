#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<assert.h>
#include<iostream>
#include<string>
#include<bitset>
using namespace std;
const int maxn = 205;
string s[maxn];
bitset<2200>bs[maxn];

void bs_insert(string s, bitset<2200> &b) {
	int len = s.length();
	for (int i = 0; i < len; i++) {
		int cnt = 1;
		for (int k = 0; k < 10 && i + k < len; k++) {
			if (s[i + k] == '1') cnt = cnt * 2 + 1;
			else cnt = cnt * 2;
			b[cnt] = 1;
		}
	}
}
int main() {
	int n, m;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		bs_insert(s[i], bs[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int l, r;
		scanf("%d%d", &l, &r);
		l--, r--;
		bs[i + n] = bs[l] | bs[r];
		s[i + n] = s[l] + s[r];
		bs_insert(s[i + n], bs[i + n]);
		int k = 1;
		while (1) {
			bool flag = 1;
			for (int j = 1 << k; j < 1 << (k + 1); j++)
				if (!bs[i + n][j]) {
					flag = 0;
					break;
				}
			if (!flag) break;
			k++;
		}
		if (s[i + n].length() >= 2000) s[i + n] = s[i + n].substr(0, 10) + s[i + n].substr(s[i + n].length() - 10, 10);
		cout << k - 1 << endl;
	}
	//system("pause");
	return 0;
}