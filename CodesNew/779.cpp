#include <bits/stdc++.h>

using namespace std;

#define rfile freopen("parties.in", "r", stdin)
#define wfile freopen("parties.out", "w", stdout)
#define files rfile; wfile

typedef long long ll;
typedef long double ld;
typedef vector< int > vi;
typedef vector< char > vc;
typedef vector< vc > vvc;
typedef vector< vi > vvi;
typedef map< int, int > mapT;
typedef pair< int, int > pairT;

int main()
{
	int n, m, k1, k2, k;
	cin >> n >> m;
	k1 = n;
	k2 = m;
	k = 0;
	string s;
	map< string, int > mn;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		mn[s]++;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		if (mn.find(s) != mn.end())
		{
			k1--;
			k2--;
			k++;
		}
	}
	if (k % 2 == 1)
		k1++;
	if (k1 <= k2)
		printf("NO");
	else
		printf("YES");
	return 0;
}