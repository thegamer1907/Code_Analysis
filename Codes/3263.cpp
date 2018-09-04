#pragma comment(linker, "/STACK:128777216")
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
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
#include <unordered_map>
#include <unordered_set>
#include <ctime>
#include <random>
using namespace std;

#define forx(_name,_from, _to, _value) for (int _name = _from; _name < _to; _name += _value)
#define rforx(_name, _from, _to, _value) for (int _name = _from; _name > _to; _name -= _value)
#define all(_STL_NAME) _STL_NAME.begin(), _STL_NAME.end()
#define rall(_STL_NAME) _STL_NAME.rbegin(), _STL_NAME.rend()
#define mp(_FIRST,_SECOND) make_pair(_FIRST,_SECOND)

typedef long long ll;
typedef unsigned long long llu;
typedef long double ld;
const ld eps = pow(10.0, -10.0);
mt19937 rndm;

void start() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout.precision(15); cout.setf(ios::fixed);
	string FILENAME = "sample";
	rndm.seed(time(0));
#ifdef _DEBUG
	freopen("input.txt", "rt", stdin);
	freopen("output.txt", "wt", stdout);
#else
	//freopen((FILENAME+".in").c_str(), "rt", stdin);
	//freopen((FILENAME+".out").c_str(), "wt", stdout);
#endif
}

int main() {
	start();
	int n;
	cin >> n;
	set<int> vs;
	vector<int> ts(n);
	for (int i = 0; i < n; ++i) {
		int v;
		cin >> v;
		vs.insert(v);
		ts[i] = v;
	}
	for (int i = 0; i < n; ++i)
		if (ts[i] <= i || !ts[i])
			return !(cout << i+1);
	auto j = vs.begin();
	while (!(*j))
		++j;
	int minu = *j;
	for (int i = 0; i < n; ++i)
		ts[i] -= minu;
	for (int pos = minu % n, timer = 0; timer < n; timer++, pos = (pos + 1) % n) {
		if (ts[pos] <= timer || !ts[pos])
			return !(cout << pos + 1);
	}
	return 0;
}