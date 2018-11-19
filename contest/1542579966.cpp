/* Nurgazy Zhandos */

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <fstream>
#include <utility>
#include <string>
#include <vector>
#include <cstdio>
#include <queue>
#include <deque>
#include <cmath>
#include <queue>
#include <stack>
#include <map>
#include <set>

#define F first
#define S second

#define pf push_front
#define pb push_back
#define mp make_pair
#define pp pop_back

#define all(a) a.begin(), a.end()
#define sz(a) a.size()
#define STOP return 0

using namespace std;

typedef pair <long long, long long> PLL;
typedef unsigned long long ULL;
typedef pair <int, int> PII;
typedef long double LD;
typedef long long LL;

const int inf = 1e9 + 123;
const LL INF = 1e18 + 123;
const double eps = 1e-9;
const int mod = 1e9 + 7;


void boost() {
	ios_base :: sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
}
	
	int h, m, s, a, b, cnt = 1, cnb = 1;
	
int main () {
	//	freopen(".in", "r", stdin);                                                                                                                       
	//	freopen(".out", "w", stdout);

	
	cin >> h >> m >> s >> a >> b;
	
	int kk = max(a, b);
	int gg = min(a, b);
	
	a = gg;
	b = kk;
	
	int aa = a * 5;
	int bb = b * 5;
	
	if(s > aa && s < bb) {
		cnt = 0;
	}
	else{
		cnb = 0;
	}
	
	if(m == aa) {
		cnt = 0;
	}
	else if(m == bb) {
		cnb = 0;
	}
	else if(m > aa && m < bb) {
		cnt = 0;
	}
	else{
		cnb = 0;
	}
	
	
	if(h == a) {
		cnt = 0;
	}
	else if(h == b) {
		cnb = 0;
	}
	else if(h > a && h < b) {
		cnt = 0;
	}
	else{
		cnb = 0;
	}
	
	if(cnt == 1 or cnb == 1) {
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
