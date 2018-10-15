#include <bits/stdc++.h>

using namespace std;

#define rfile freopen("input.txt", "r", stdin)
#define wfile freopen("output.txt", "w", stdout)
#define files rfile; wfile
#define pb push_back
#define f first
#define s second
#define sws ios_base::sync_with_stdio(0)

typedef long long ll;
typedef long double ld;
typedef vector< int > vi;
typedef vector< char > vc;
typedef vector< vc > vvc;
typedef vector< vi > vvi;
typedef map< int, int > mapT;
typedef pair< int, int > pairT;

const int inf = (int)1e9;
const ll llinf = (ll)9e18;
const int N = (int)2e5 + 111;

int main()
{
	sws;
	int n, j;
	cin >> n;
	vector< string > a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		a[i] = a[i].substr(1, a[i].length() - 1);
	}
	for (int i = n - 1; i > 0; i--)
	{
		bool eq = true, ok = false;
		for (j = 0; j < (int)min(a[i].length(), a[i - 1].length()); j++)
			if (a[i][j] != a[i - 1][j])
			{
				eq = false;
				if (a[i][j] > a[i - 1][j])
					ok = true;
				else
					break;
			}
		if (eq)
			a[i - 1] = a[i - 1].substr(0, min(a[i].length(), a[i - 1].length()));
		else
			if (!ok)
				a[i - 1] = a[i - 1].substr(0, j);
	}
	for (int i = 0; i < n; i++)
		cout << "#" << a[i] << endl;
	return 0;
}