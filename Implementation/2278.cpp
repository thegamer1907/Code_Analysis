#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n, w; cin >> k >> n >> w;
	cout << max(0LL, 1LL*(1+w)*w/2*k-n) << endl;
	
	return 0;
}