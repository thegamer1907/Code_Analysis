#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 101;

string a[N];
string s;
int n;

int main () {

	#ifdef LOCAL
	freopen ("in", "r", stdin);
	#endif

	ios_base :: sync_with_stdio (0);
	cin.tie (0);

	cin >> s;

	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			if ((a[i] + a[j]).find (s) != string::npos) {
				cout << "YES";
				return 0;			
			}
		}
	}
	
	cout << "NO";
	return 0;
}