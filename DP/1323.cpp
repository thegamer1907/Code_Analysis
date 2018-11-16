#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <map>
#include <set>
#include <bitset>
#include <vector>
#include <algorithm>
#include <cmath>
#include <ctime>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <iomanip>

#pragma comment(linker, "/STACK:16000000")

#define rn(n) int n; cin >> n
#define fv(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define db double
#define sqr(n) ((n) * (n))

using namespace std;

const int INF = 1'000'000'007;
const int MOD = 998'244'353;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
#ifdef Local_file
	freopen("file.in.txt", "r", stdin);
	freopen("file.out.txt", "w", stdout);
#endif
	
	int n;
	cin >> n;
	bitset <150> b;
	fv(i, n) {
		rn(k);
		if (k == 1) b[i] = true;
	}
	size_t mx = 0;
	//mx = max(mx, b.count());

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			for (int k = i; k <= j; k++)
				b[k].flip();
			mx = max(mx, b.count());
			for (int k = i; k <= j; k++)
				b[k].flip();
		}
	}
	cout << mx;
	return 0;
}