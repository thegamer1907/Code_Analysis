#include "bits/stdc++.h"
using namespace std;
const int N = 1e5 + 5;

int sum(int x) {
	return !x ? 0 : (x % 10) + sum(x / 10);
}


int main() {
	int k; cin >> k;
	int cur = 0;
	for(int i = 1; cur < k; ++i) {
		if(sum(i) == 10) {
			cur++;
		}
		if(cur == k) {
			cout << i ;
			return 0;
		}
	}
	return 0;
}