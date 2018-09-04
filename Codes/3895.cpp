#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <functional>
#include <stdio.h>
#include <map>
#include <algorithm>
#include <set>
#include <string>
#include <cstring>
#include <sstream>
#include <cmath>
#include <iomanip>
#include <cstdio>
#include <ctime>
#include <numeric>
#include <bitset>
#include <utility>
using namespace std;
typedef long long ll;
int oo = 2147483647;
ll OO = 9223372036854775807;

int nB, nS, nC, pB, pS, pC;
ll m;
int rB, rS, rC;

bool valid(ll x)
{
	ll required_B = x * 1LL * rB;
	ll required_S = x * 1LL * rS;
	ll required_C = x * 1LL * rC;
	ll needed_B = required_B - nB > 0 ? required_B - nB : 0;
	ll needed_S = required_S - nS > 0 ? required_S - nS : 0;
	ll needed_C = required_C - nC > 0 ? required_C - nC : 0;
	return (m - (needed_B*1LL*pB + needed_C*1LL*pC + needed_S*1LL*pS) >= 0);
}
int main()
{
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
		string s;
		cin >> s;
		rB = count(s.begin(), s.end(), 'B');
		rS = count(s.begin(), s.end(), 'S');
		rC = count(s.begin(), s.end(), 'C');
		scanf("%d%d%d%d%d%d", &nB, &nS, &nC, &pB, &pS, &pC);
		cin >> m;
		ll l = 0, r = 100000000000000;
		while (l < r)
		{
			ll mid = l + (r - l + 1) / 2;
			if (valid(mid)) l = mid;
			else r = mid - 1;
		}
		cout << l;
	return 0;
}