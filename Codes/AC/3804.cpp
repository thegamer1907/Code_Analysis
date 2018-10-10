#define _CRT_SECURE_NO_WARNINGS 1
#include <vector>
#include <map>
#include <set>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <sstream>
#include <iostream>
#include <cmath>
#include<cstring>
#include <cstdio>
#include <stack>
#include<iomanip>
#include<queue>
#include<functional>
#include<iterator>
#include<new>
#include<cstdlib>
using namespace std;
#define INF 2000000000
#define scll(x) scanf("%lld",&x);
#define sci(x)  scanf("%d",&x);
#define scc(x)  scanf("%c", &c);
typedef long long ll;
typedef pair<int, int> pi;
typedef pair<long long, long long> pll;

ll gcd(ll a, ll b) {
	return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
	return a * b / gcd(a, b);
}

string s;
int nb, ns, nc, pb, ps, pc;
ll r;
int ab, as, ac;

bool ok(ll cnt) {
	ll costB = max((ab * cnt - nb) * pb, 0 * 1LL);
	ll costS = max((as * cnt - ns) * ps, 0 * 1LL);
	ll costC = max((ac * cnt - nc) * pc, 0 * 1LL);
	ll totalCost = costB + costS + costC;

	return totalCost <= r;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
#endif
	cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> r;

	for (int i = 0; i < (int) s.size(); i++) {
		ab += (s[i] == 'B');
		as += (s[i] == 'S');
		ac += (s[i] == 'C');
	}

	ll l = 0, r = 1e15;
	while (l < r) {
		ll mid = l + (r - l + 1) / 2;
		if (ok(mid))
			l = mid;
		else
			r = mid - 1;
	}
	cout << l << endl;
	return 0;
}

