#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <deque>
#include <ctime>

typedef long long ll;
using namespace std;

void fast_in() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
}

int main() {
	fast_in();
	int n, a, b;
	cin >> n >> a >> b;
	a--; b--;
	for (int i = 1; (1 << (i + 1)) <= n; i++) {
		if (a / (1 << i) == b / (1 << i)) {
			cout << i;
			return 0;
		}
	}
	cout << "Final!";
	return 0;
}