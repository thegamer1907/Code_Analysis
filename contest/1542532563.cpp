#pragma once
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <cmath>
#include <math.h>
#include <queue>
#include <stack>
#include <climits>
#include <deque>
#include <ctime>
#include <iomanip>
#include <bitset>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int ui;

#define mh() make_heap()
#define poph() pop_heap()
#define pushh() push_heap()
#define sor(n) n.begin(), n.end()
#define rsor(n) n.rbegin(), n.rend()
#define mp make_pair
#define files freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout)
#define p(T) pair<T,T>
#define toch(x) cout.precision(x), cout.setf(ios::fixed)
#define znac(l) abs(l)/l
#define IOS ios::sync_with_stdio(false)
#define IOSB cin.tie(0), cout.tie(0);
const ll ok = ll(1e9 + 7);

int main()
{
	//IOSB;
	IOS;
#ifdef TheCompiler
	files;
#endif
	string s;
	cin >> s;
	string h = s;
	char f = s[0], b = s[1];
	ll n;
	cin >> n;
	set<char>fr, sc;
	for (int i = 1; i <= n; i++)
	{
		cin >> s;
		if (s == h)
		{
			cout << "YES";
			return 0;
		}
		fr.insert(s[0]);
		sc.insert(s[1]);
	}
	if (sc.find(f) != sc.end() && fr.find(b) != fr.end())
		cout << "YES";
	else
		cout << "NO";
	return 0;
}