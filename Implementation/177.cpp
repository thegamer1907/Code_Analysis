#define _CRT_SECURE_NO_WARNINGS
#define mp make_pair
#define pii pair <int, int>
#define pll pair <ll, ll>
#define pdd pair <db, db>
#define pss pair <string, string>
#define rep(n, i) for (int i = 0; i < n; ++i)
#define all(a) a.begin(), a.end()
#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <string.h>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <functional>
typedef long long ll;
typedef double db;
using namespace std;

const ll MOD = 1000000007;
const db eps = 10e-7;
const int sz = 300;

int n, a, b, numa, numb, ind;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
	scanf("%d%d%d", &n, &a, &b);
	numa = a;
	numb = b;
	ind = 1;
	while ((numa + 1) / 2 != (numb + 1) / 2) {
		++ind;
		numa = (numa + 1) / 2;
		numb = (numb + 1) / 2;
	}
	if (pow(2, ind) == n)
		printf("Final!");
	else
		printf("%d", ind);
	return 0;
}