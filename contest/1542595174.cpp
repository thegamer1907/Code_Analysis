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


bool have[2];

int main()
{
#if defined(_DEBUG)
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false); cin.tie(0);
	string s; cin >> s;
	int n; cin >> n;
	fori(n) {
		string ss; cin >> ss;
		if (ss == s) {
			cout << "YES";
			return 0;
		}
		if (ss[1] == s[0])have[0] = true;
		if (ss[0] == s[1])have[1] = true;
	}
	if (have[0] && have[1])
		cout << "YES";
	else
		cout << "NO";
	return 0;
}