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

const int N = (int)105;
            	
using namespace std;

bool can[500][500];
string s[N];
int n;

int main()
{
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	string pass;
	cin >> pass;
	cin >> n;
	forn(i, n)
	{
		cin >> s[i];
		can[s[i][0]][s[i][1]] = true;
    }                           	
    forn(i, n)
    {
    	forn(j, n)
    	{
    		can[s[i][1]][s[j][0]] = true;
    	}
    }
    if (can[pass[0]][pass[1]])
    	cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
