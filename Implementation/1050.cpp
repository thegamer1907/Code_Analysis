/**
 *      author : azhar556
 *      12 September 2018   2:45 AM (+7)
**/

#include <bits/stdc++.h>
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

using namespace std;

typedef double db;
typedef long long i64;

const int MAX = 1e9 + 7;
const db PI = acos(-1.0);

void solve() 
{
	int n, t;
	cin >> n >> t;
	
	string s;
	cin >> s;
	
	for (int a = 0; a < t; a++)
	{
		int aw = 0;
		while (aw < n - 1)
		{
			if (s[aw] == 'B' && s[aw + 1] == 'G')
			{
				swap(s[aw], s[aw + 1]);
				aw += 2;
			}
			else 
				aw++;
		}
	}
	
	cout << s;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	solve();
	
	cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
	return 0;
}