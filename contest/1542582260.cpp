#include <bits/stdc++.h>

#define pp push_back
#define pf push_front
#define mp make_pair
#define fs first
#define sc second
#define sf scanf

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

const int N = (int) 1e9;

int main(int argc, char *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	string p;
	cin >> p;
	int n;
	cin >> n;
	char a[n];
	char b[n];
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		a[i] = s[0];
		b[i] = s[1];
	}
	bool ok = false;
	for (int i = 0; i < n; ++i) {
		if (b[i] == p[1] && a[i] == p[0]) {
			ok = true;
		}
		for (int j = 0; j < n; ++j) {
			if (b[i] == p[0] && a[j] == p[1]) {
				ok = true;
			}
		}
	}
	puts(ok ? "YES" : "NO");
	return 0;
}
