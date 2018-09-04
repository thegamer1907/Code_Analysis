#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <set>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <deque>
#include <map>
#include <iomanip>
#include <functional>
#include <queue>
#include <stdlib.h>

using namespace std;

const double eps = 1e-9;
const long long mod = 1e9 + 7;

#define pb push_back
#define F first
#define S second

typedef long long ll;

void solve();

signed main() {
	srand('V' + 'a' + 'n' + 'k' + 'a' + 'T' + 'a' + 'g' + 'a' + 'n' + 'a' + 'i');
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	solve();

	return 0;
}

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> pra, prb;
    pra.push_back(0);
    prb.push_back(0);
    if (s[0] == 'a') {
        pra.push_back(1);
        prb.push_back(0);
    }
    else {
        pra.push_back(0);
        prb.push_back(1);
    }

    for (int i = 1; i < n; i++) {
        if (s[i] == 'a') {
            pra.push_back(pra.back() + 1);
            prb.push_back(prb.back());
        }
        else {
            pra.push_back(pra.back());
            prb.push_back(prb.back() + 1);
        }
    }

    int ansa = 0, ansb = 0;
    for (int i = 0; i < n + 1; i++) {
        int it1 = int(upper_bound(pra.begin(), pra.end(), pra[i] + k) - pra.begin() - 1);
        int it2 = int(upper_bound(prb.begin(), prb.end(), prb[i] + k) - prb.begin() - 1);
        ansa = max(ansa, it1 - i);
        ansb = max(ansb, it2 - i);
    }
    cout << max(ansa, ansb);
	return;
}
