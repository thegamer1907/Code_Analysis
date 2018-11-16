#include "bits/stdc++.h"

using ll = long long;
//#define long Michael hör auf long longs zu benutzen

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	long long n, w, k;
	cin >> k >> n >> w;
	cout << max(0ll, w * (w + 1) / 2 * k - n) << endl;
}