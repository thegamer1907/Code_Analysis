#include <bits/stdc++.h>
#define endl '\n'

//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

using namespace std;
template<class T, class T2> inline int chkmax(T &x, const T2 &y) { return x < y ? x = y, 1 : 0; }
template<class T, class T2> inline int chkmin(T &x, const T2 &y) { return x > y ? x = y, 1 : 0; }
const int MAXN = (1 << 20);

int n;
string pass, s[MAXN];

void read()
{
	cin >> pass >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> s[i];
		if(s[i] == pass) 
		{
			cout << "YES" << endl;
			exit(0);
		}
	}
}

void solve()
{
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			if(s[i][1] == pass[0] && pass[1] == s[j][0])
			{
				cout << "YES" << endl;
				return;
			}

	cout << "NO" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	read();
	solve();
	return 0;
}

