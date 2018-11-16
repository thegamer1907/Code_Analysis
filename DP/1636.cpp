#include <bits/stdc++.h>
#define frin(i, n) for (int i = 0; i < n; i++)
#define frd(i, n) for (int i = n; i > 0; i--)
#define frab(i, a, b) for(int i = a; i < b; i++)
#define frit(it, s) for(auto it = s.begin(); it != s.end(); it++)
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()


typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef unsigned int ui;

const ll LINF = 1e18;
const int INF = 1e9;
const int M = 998244353;
const double EPS = 1.0e-9;
const double PI = acos(-1.0);


using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(0);
//    freopen("a.in", "r", stdin);
//    freopen("a.out", "w", stdout);

    string s;
    cin >> s;
    int a1 = INF, a2 = INF, b1 = INF, b2 = INF;
    int len = s.length();
    frin(i, len - 1)
    	if (s[i] == 'A' && s[i + 1] == 'B')
    	{
    		a1 = i;
    		break;
    	}
    frin(i, len - 1)
    	if (s[i] == 'A' && s[i + 1] == 'B')
    		a2 = i;
    frin(i, len - 1)
    	if (s[i] == 'B' && s[i + 1] == 'A')
    	{
    		b1 = i;
    		break;
    	}
    frin(i, len - 1)
    	if (s[i] == 'B' && s[i + 1] == 'A')
    		b2 = i;
    if (a1 == INF || b1 == INF)
    {
    	cout << "NO";
    	return 0;
    }
	if (abs(b2 - a1) != 1 || abs(b1 - a2) != 1)
		cout << "YES";
	else
		cout << "NO";
    return 0;
}
