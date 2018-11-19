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

int n, k;
bool prob[16];

int main() {
	while (cin >> n >> k) {
		for (int i = 0; i < n; i++) {
			int x = 0;
			for (int j = 0; j < k; j++) {
				int tmp;
				cin >> tmp;
				x *= 2;
				x += tmp;
			}
			prob[x] = true;
		}
		bool ans = false;
		for (int i = 0; i < 16; i++) {
			for (int j = i; j < 16; j++) {
				if (prob[i] && prob[j] && (i&j) == 0) {
					ans = true;
					break;
				}
			}
			if (ans)break;
		}
		if (ans)cout << "yes\n";
		else cout << "no\n";
	}

	//system("pause");
}