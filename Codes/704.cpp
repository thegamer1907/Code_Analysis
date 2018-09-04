#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#define TEST ""
#define push_back pb
#define make_pair mp
#define first ff
#define second ss
#include <cassert>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef long double ld;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

bool check(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return (sum == 10);
}

void solve() {
	int k;
	cin >> k;
	int count = 0;
	for (int i = 1; ; i++) {
	    if (check(i)) {
	        count++;
	    }
	    if (count == k) {
	        cout << i << endl;
	        return;
	    }
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	solve();

	return 0;
}