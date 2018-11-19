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

set < string > st;
int n, k;
vector < string > a;
bool was[5];

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	scanf("%d%d", &n, &k);
	forn(i, n)
	{
		string s;
		forn(j, k)
		{
			int x;
			scanf("%d", &x);
			s += char(x + '0');
		}
		st.insert(s);
	}
	for (auto it : st)
		a.pb(it);
	for (auto l : a)
	{
		for (auto r : a)
		{
			fill(was + 1, was + k + 1, false);	
			for (int i = 0; i < (int)l.size(); i++)
				if (l[i] == '0')
					was[i + 1] = true;
			for (int i = 0; i < (int)r.size(); i++)
				if (r[i] == '0')
					was[i + 1] = true;								
			bool good = true;
			forn(j, k)
				if (!was[j])
					good = false;	
			if (good)
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
                             	
	return 0;
}
