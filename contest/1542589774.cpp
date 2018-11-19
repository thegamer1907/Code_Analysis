#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include<bits/stdc++.h>

using namespace std;

const int INF = INT_MAX;
const double EPS = 1e-9;
const int PI = M_PI;
const int E = M_E;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vint;
typedef vector<double> vd;
typedef vector<bool> vbool;
typedef vector<vector<int>> vvint;
typedef vector<ll> vll;

#define make_pair(a,b) mp(a,b)
#define all(a) a.begin(), a.end()
#define error exit(1)
#define sz(a) a.size()
#define DEBUG


int main() {
	string pass;
	cin >> pass;
	int n = 0;
	cin >> n;
	string pass1;
	vector<pair<char,char> >lay(n);
	for (int i = 0; i < n; i++) {
		cin >> lay[i].first >> lay[i].second;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			pass1 = "";
			pass1.append(1,lay[i].second);
			pass1.append(1,lay[j].first);
			if (pass == pass1) {
				cout << "YES";
				return 0;
			}
		}
		pass1 = "";
		pass1.append(1, lay[i].first);
		pass1.append(1, lay[i].second);
		if (pass == pass1) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}

