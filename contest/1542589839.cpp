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
		
int main () {
	//	freopen(".in", "r", stdin);                                                                                                                       
	//	freopen(".out", "w", stdout);
	
	string s;
	cin >> s;
	
	int n;
	cin >> n;
	
	string g, c = "";
	
	int cnt = 0, cnb = 0;
	 
	for(int i = 1; i <= n; i++) {
		cin >> g;
		if(g == s) {
			cout << "YES";
			return 0;
		}
		if(s[0] == g[1]) {
			cnt++;
		}
		if(s[1] == g[0]) {
			cnb++;
		}
	}
	
	if(cnt > 0 && cnb > 0) {
		cout << "YES";
		return 0;
	}
	cout << "NO";
}
