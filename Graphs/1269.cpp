#include <bits/stdc++.h>
#define MAXN 30002
#define PB push_back

using namespace std;

typedef vector<int> vi;
vi G(MAXN);

int N, T, p, pos;

int main() {

	cin >> N >> T;
			
	for (int i = 0; i < N - 1; ++i) {
		cin >> p;
		pos = (i + p);
		G[i] = pos;
	}
	for (int i = 0; i < N - 1; ++i) {
		pos = G[i];
		i = pos;
		if (pos == (T - 1)){
			cout << "YES\n";
			break;
		} else if (pos > (T - 1) || pos == 0) {
			cout << "NO\n";
			break;
		}
		i--;
	}
	
	return 0;
}




