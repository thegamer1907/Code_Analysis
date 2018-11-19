//By Don4ick
//#define _GLIBCXX_DEBUG

#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
typedef unsigned int ui;

#define forn(i, n) for (int i = 1; i <= n; i++)
#define pb push_back
#define all(x) x.begin(), x.end()
#define y1 qwer1234

const double PI = acos(-1.0);
const int DIR = 4;
const int X[] = {1, 0, -1, 0};
const int Y[] = {0, 1, 0, -1};
                        	
using namespace std;

vector < pair < int, int > > v;

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	if (t1 == 12)
		t1 = 0;
	if (t2 == 12)	
		t2 = 0;
	if (h == 12)
		h = 0;
	if (t1 == t2)
	{
		cout << "YES" << endl;
		return 0;
	}
	if (t2 < t1)
		swap(t1, t2);
	bool good = false;
	if ((h >= t1 && h < t2) && (t1 * 5 <= m && t2 * 5 > m) && (t1 * 5 <= s && t2 * 5 >= s))
		good = true;
	if (!(h >= t1 && h < t2) && !(t1 * 5 <= m && t2 * 5 > m) && !(t1 * 5 <= s && t2 * 5 >= s))
		good = true;
	if (good)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;    	
	return 0;
}
