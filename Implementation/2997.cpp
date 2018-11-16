#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <vector>
#include <deque>
#include <bitset>
#include <algorithm>
#include <set>
#include <iomanip>
#include <string>
#include <map>

#define rn(n) int n; cin >> n;
#define fv(i, n) for (int i = 0; i < n; i++)
#define mp(a, b) make_pair(a, b)
#define sqr(a) ((a) * (a))
using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
#ifdef Local_file
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	rn(n);
	int a = 0, b = 0;
	fv(i, n) {
		rn(A); rn(B);
		if (A > B) a++;
		if (A < B) b++;
	}
	if (a > b) cout << "Mishka";
	if (a == b) cout << "Friendship is magic!^^";
	if (a < b) cout << "Chris";
	return 0;
}