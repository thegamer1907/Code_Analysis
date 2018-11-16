/*
chirag11032000
Chirag Thakur
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef double db;
typedef pair < ll, ll > pll;
typedef tree < ll, null_type, less < ll >, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

#define pb push_back
#define debug(x) cout << (#x) << " is " << (x) << endl
#define fast_io() ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0)

const db PI = acos(-1);
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX;
const ll N = 1e5 + 10;

bool check1(string s);
bool check2(string s);

int main() {
    fast_io();
    string s;
    cin >> s;
    bool ok = check1(s);
    if (ok) {
    	cout << "YES\n";
    } else {
    	ok = check2(s);
    	if (ok) {
    		cout << "YES\n";
    	} else {
    		cout << "NO\n";
    	}
    }
    return 0;
}

bool check1(string s) {
	ll ind = s.find("AB");
	if (ind == string :: npos) {
		return false;
	} else {
		s[ind] = s[ind + 1] = '.';
		ind = s.find("BA");
		if (ind == string :: npos) {
			return false;
		} else {
			return true;
		}
	}
}

bool check2(string s) {
	ll ind = s.find("BA");
	if (ind == string :: npos) {
		return false;
	} else {
		s[ind] = s[ind + 1] = '.';
		ind = s.find("AB");
		if (ind == string :: npos) {
			return false;
		} else {
			return true;
		}
	}
}