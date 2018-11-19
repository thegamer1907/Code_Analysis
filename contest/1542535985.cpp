#include <bits/stdc++.h>
 
using namespace std;
 
#define rfile freopen("input.txt", "r", stdin)
#define wfile freopen("output.txt", "w", stdout)
#define files rfile; wfile
 
typedef long long ll;
typedef long double ld;
typedef vector< int > vi;
typedef vector< char > vc;
typedef vector< vi > vvi;
typedef map< ll, ll > mapT;
typedef pair< int, int > pairT;

bool is(string a, string b)
{
	for (int i = 0; i < 3; i++)
		if (a.substr(i, 2) == b)
			return true;
	return false;
}

int main()
{
	string s;
	int n;
	cin >> s >> n;
	vector< string > a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == s)
		{
			printf("YES");
			return 0;
		}
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
				if (is(a[i] +  a[j], s) || is(a[j] + a[i], s))
				{
					printf("YES");
					return 0;
				}
	printf("NO");
    return 0;
}