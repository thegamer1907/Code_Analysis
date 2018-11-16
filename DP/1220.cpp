#include <bits/stdc++.h>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> vA(N);
	vector<int> vB(N);
	int res = 0;
	for (int i=0; i<N; ++i) {
		cin >> vA[i];
		res += vA[i];
	}
	if (res == N) {
		cout << N-1 << "\n";
		return 0;
	}
	vB[0] = 1-vA[0];
	int imax = vB[0];
	for (int i=1; i<N; ++i) {
		if (vA[i] == 0) {
			vB[i] = max(vB[i-1]+1, 1);
			imax = max(vB[i], imax);
		}
		else {
			vB[i] = max(vB[i-1]-1, 0);
		}
	}
	cout << res+imax << "\n";
}
