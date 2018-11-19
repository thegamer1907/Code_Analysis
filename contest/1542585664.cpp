#include <bits/stdc++.h>

using namespace std;



int main(int argc, char *argv[]) {

	
	int N, K;
	scanf("%d%d", &N, &K);
	vector<int> V;
	for (int i = 0; i < N; ++i) {
		int n = 0;
		for (int j = 0; j < K; ++j) {
			int b;
			scanf("%d", &b);
			n |= b << j;
		}
		V.push_back(n);
	}
	sort(V.begin(), V.end());
	V.erase(unique(V.begin(), V.end()), V.end());
	for (int i = 1; i < (1<<V.size()); ++i) {
		vector<int> S(K);
		int T = __builtin_popcount(i);
		for (int j = 0; j < V.size(); ++j) {
			if((1<<j) & i){
				for (int k = 0; k < K; ++k) {
					if((1<<k) & V[j]){
						S[k]++;
					}
				}
			}
		}
		int ok = 1;
		for (int j = 0; j < K; ++j) {
			if(S[j]*2 > T){
				ok = 0;
			}
		}
		if(ok){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}
