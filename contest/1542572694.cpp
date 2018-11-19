#define _CRT_SECURE_NO_DEPRECATE
#pragma comment(linker, "/STACK:167772160000")
#include <iostream>
#include <fstream>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>
#include <list>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <iomanip>
#include <queue>
#include <deque>
#include <set>
#include <unordered_set>
#include <stack>
#include <sstream>
#include <assert.h>
#include <functional>
#include <climits>
#include <cstring>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
//typedef uint64_t ull;
//typedef std::pair<long double,long double> pdd;
#define fori(N)          for(int i = 0; i<(N); i++)
#define forj(N)         for(int j = 0; j<(N); j++)
#define fork(N)         for(int k = 0; k<(N); k++)
#define forl(N)         for(int l = 0; l<(N); l++)
#define ford(N)         for(int d = 0; d<(N); d++)
#define fori1(N)          for(int i = 1; i<=(N); i++)
#define forj1(N)         for(int j = 1; j<=(N); j++)
#define fork1(N)         for(int k = 1; k<=(N); k++)
#define ford1(N)         for(int d = 1; d<=(N); d++)
#define forl1(N)         for(int l = 1; l<=(N); l++)
#define PI (2*asin(1))
#define print(n) printf("%d ", (n))
#define printll(n) printf("%I64d ", (n))
#define printline() printf("\n")
#define read(n) scanf("%d", &n);
#define read2(n, m) scanf("%d%d", &n, &m);
#define readll(n) scanf("%I64d", &n);
#define mp make_pair

struct str {
	string beg;
	string end;
	set<int>contains[30];
};

str unite(str a, str b) {
	str ret;
	string newString = a.end + b.beg;

	fori(15) {
		if (a.contains[i].size() > b.contains[i].size()) {
			ret.contains[i] = a.contains[i];
			for (auto x : b.contains[i])
				ret.contains[i].insert(x);
		}
		else {
			ret.contains[i] = b.contains[i];
			for (auto x : a.contains[i])
				ret.contains[i].insert(x);

		}

	}


	for (int i = 0; i < newString.size(); i++)
		for (int j = i; j < newString.size(); j++) {
			if (j - i + 1 > 15)continue;
			int curString = 0;
			for (int k = i; k <= j; k++)
				if (newString[k] == '1')
					curString |= (1 << (k - i));
			ret.contains[j - i].insert(curString);
		}
	if (a.beg.length() < 15) {
		ret.beg = newString;
		if (ret.beg.length() > 15)
			ret.beg = ret.beg.substr( 0,15);
	}
	else ret.beg = a.beg;

	if (b.end.length() < 15) {
		ret.end = newString;
		if (ret.end.length() > 15)
			ret.end = ret.end.substr(ret.end.length() - 15, 15);
	}
	else ret.end = b.end;
	return ret;
}
str strings[300];
str zer;
int main()
{
#if defined(_DEBUG)
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false); cin.tie(0);
	int n; cin >> n;
	fori1(n) {
		str s = zer;
		cin >> s.beg;
		s.end = s.beg;
		strings[i] = unite(s, zer);

	}
	int m; cin >> m;
	for (int i = n + 1; i <= n + m; i++) {
		int a, b; cin >> a >> b;
		strings[i] = unite(strings[a], strings[b]);
		int j = 0;
		while (strings[i].contains[j].size() == (1 << (j + 1)))j++;
		cout << j << endl;
	}
	return 0;
}