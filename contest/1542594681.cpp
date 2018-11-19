#include <bits/stdc++.h>
using namespace std;
#define FOR(i, n) for(int i = 0; i < (n); i++)
#define MEM(a, x) memset(a, x, sizeof(a))
#define ALL(a) a.begin(), a.end()
#define UNIQUE(a) a.erase(unique(ALL(a)), a.end())
typedef long long ll;

string s;
int n;
bool fi, se;

int main(int argc, char const *argv[]) {
	ios_base::sync_with_stdio(false);
	cin >> s >> n;
	FOR(i, n) {
		string t;
		cin >> t;
		if (s == t) {
			fi = true;
			se = true;
		}
		if (t[1] == s[0]) fi = true;
		if (t[0] == s[1]) se = true;
	}
	cout << (fi && se ? "YES" : "NO") << endl;
	return 0;
}