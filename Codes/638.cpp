#define _CRT_SECURE_NO_WARNINGS
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <set>
#include <deque>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <queue>
#include <sstream> 
#include <bitset>
//#include <priority_queue>


using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pt;


ll sum_digits(ll a) {
	ll sum = 0;
	while (a) {
		sum += a % 10;
		a /= 10;
	}
	return sum;
}

int main() {

	//    freopen("kotlin.in", "r", stdin);
	//    freopen("kotlin.out", "w", stdout);
	//
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ll n;
	cin >> n;
	ll cnt = 0;
	ll ans;
	for (ll i = 1; i < 20000000; i++) {
		if (sum_digits(i) == 10) {
			cnt++;
			ans = i;
			if (cnt == n) {
				cout << ans;
				return 0;
			}
		}
		
	}

    return 0;
}