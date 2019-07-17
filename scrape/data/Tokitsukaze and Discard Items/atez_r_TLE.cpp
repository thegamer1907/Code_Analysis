#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <vector>
#include <utility>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <tuple>
#include <set>
#include <map>
#include <functional>
#include <cmath>
#include <cstring>
using namespace std;
#define sci(n) scanf("%lld", &(n))
#define scd(n) scanf("%Ld", &(n))
typedef long long LL;
typedef long double LD;
typedef pair<LL, LL> pll;
int main(void)
{
	LL n, m, k;
	sci(n), sci(m), sci(k);
	queue<LL> vm;
	for (int i = 0; i < m; i++) {
		LL temp; sci(temp); vm.push(temp);
	}
	LL ans = 0;
	LL glerc = 0;
	LL page = 1;

	while (!vm.empty()) {
		LL erc = 0;
		ans++;
		while (true) {
			if (vm.empty()) {
				break;
			}
			LL fr = vm.front();
			if (fr <= page*k + glerc) {
				vm.pop();
				erc++;
			}
			else {
				break;
			}
		}
		if (erc == 0) {
			ans--;
			LL frr = vm.front();
			page = (LL)floor((double)(frr - glerc-1) / (double)k);
		}
		glerc += erc;
	}
	printf("%lld", ans);
	return 0;
}