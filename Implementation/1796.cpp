/**
 *      author : azhar556
 *      12 September 2018   2:45 AM (+7)
**/

#include <bits/stdc++.h>
#define PI 3.14159265
#define rep(a,b,c) for(int a=b; a<c; a++)
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

using namespace std;

typedef double db;
typedef long long i64;

const int MOD = 1e9 + 7;

void solve() {
	string s;
	cin >> s;
	int z = 0, o = 0; 
	for (int a = 0; a < s.size(); a++) {
		if (s[a] == '0') {
			z++;
			o = 0;
		}
		if (s[a] == '1') {
			o++;
			z = 0;
		}
		if (z >= 7 || o >= 7) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}
int main()
{
	solve();
	
	cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
	return 0;
}
