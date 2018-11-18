// Author: Tiago Togores
#include <bits/stdc++.h>
using namespace std;
#define SZ(a) ((int)((a).size()))
#define READLINE(line) cin.getline((line), sizeof (line))
#define VALID(i, j, n, m) (0 <= (i) && (i) < (n) && 0 <= (j) && (j) < (m))
#define PI M_PI
#define EPSILON 1e-6
#define INF 1000000000
#define MOD 1000000007
#define endl '\n'

#define N 110
string w[N];

int possible(const int n, const string& password) {
	for (int i = 0; i < n; ++i) {
		if (w[i] == password) return 1;
		else if (w[i][1] == password[0]) {
			for (int j = 0; j < n; ++j) {
				if (w[j][0] == password[1])
					return 1;
			}
		}
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);cerr.tie(0);

	string password;
	int n;

	cin >> password >> n;
	for (int i = 0; i < n; ++i)
		cin >> w[i];

	cout << (possible(n, password) ? "YES" : "NO") << endl;

	return 0;
}
