#include <bits/stdc++.h>
#define int long long

using namespace std;

vector<int> vals;

int32_t main() {
	ios::sync_with_stdio(0), cin.tie(0);
	for(int i = 0; vals.size() < 1e4; i++) {
		int aux = i, sum = 0;
		while(aux) {
			sum += aux % 10;
			aux /= 10;
		}
		if(sum == 10) {
			vals.push_back(i);
		}
	}
	int N; cin >> N;
	cout << vals[N-1] << endl;
	return 0;
}