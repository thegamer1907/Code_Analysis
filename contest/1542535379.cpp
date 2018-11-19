#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

#define debug(...) fprintf(stderr, __VA_ARGS__)
#define fi first
#define se second
#define all(v) (v).begin(), (v).end()
#define fillchar(a, s) memset((a), (s), sizeof(a))

string P;
int N;

int main() {
	cin >> P >> N;
	bool has0 = false, has1 = false;
	for (int i = 0; i < N; i++) {
		string s;
		cin >> s;
		if (s == P) {
			cout << "YES\n";
			return 0;
		}

		has0 |= (P[0] == s[1]);
		has1 |= (P[1] == s[0]);
	}

	cout << (has0 && has1 ? "YES" : "NO") << '\n';
}
