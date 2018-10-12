#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
#include <queue>
#include <set>

#define SWS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define ft first
#define sd second 

using namespace std;

typedef long long ll;
typedef vector < int > vi;
typedef pair < int, int > pairt; 

const int Z = 3 * (int)1e3 + 111;
const int N = 3 * (int)1e5 + 111;
const int INF = (int)1e9 + 111;
const int MOD = (int)1e9 + 7;
const int SUKA = 5 * (int)1e5;

string s[SUKA];

int main()
{
	SWS;
	int t, j;
	cin >> t;
	for (int i = 0; i < t; i++)
		cin >> s[i];
	for (int i = t - 1; i > 0; i--)
	{
		bool f = true, ok = false;;
		int n = s[i - 1].length(), m = s[i].length();
//		cout << last << ' ' << now << ' ' << ' ' << n << ' ' << m << endl;
		for (j = 1; j < min(n, m); j++)
		{
			if (s[i][j] != s[i - 1][j])
			{
				f = false;
				if (s[i][j] > s[i - 1][j])
					ok = true;
				else break;
			}
		}
		if (f)
			s[i - 1].erase(s[i - 1].begin() + min(n, m), s[i - 1].end());
		else
			if (!ok) s[i - 1].erase(s[i - 1].begin() + j, s[i - 1].end());
	}
	for (int i = 0; i < t; i++)
		cout << s[i] << endl;
	return 0;
}