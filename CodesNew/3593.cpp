#include <iostream>
#include <functional>
#include <algorithm>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <string>
#include <cstdio>
#include <queue>
#include <stack>
#include <cmath>
#include <list>
#include <set>
#include <map>

#define MaxInt 2e9
#define LF '\n';

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

vector<int> sitting;

int main(void)
{
	ios::sync_with_stdio(false);
	int n, m, Maxsit = 0, latter;
	cin >> n >> m;
	sitting.resize(n);
	for (int a = 0; a < n; a = a + 1){
		cin >> sitting[a];
		if (sitting[a] > Maxsit) Maxsit = sitting[a];
	}
	latter = Maxsit + m;
	sort(sitting.begin(), sitting.end());
	while (m) {
		sitting[0] += 1;
		m -= 1;
		sort(sitting.begin(), sitting.end());
	}

	cout << sitting[n - 1] << ' ' << latter;
	return 0;
}
//http://codeforces.com/contest/1042/problem/A