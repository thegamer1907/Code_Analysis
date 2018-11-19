#include <bits/stdc++.h>
#define endl '\n'

//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

using namespace std;
template<class T, class T2> inline int chkmax(T &x, const T2 &y) { return x < y ? x = y, 1 : 0; }
template<class T, class T2> inline int chkmin(T &x, const T2 &y) { return x > y ? x = y, 1 : 0; }
const int MAXN = (1 << 20);

int n, k;
bool has[MAXN];

void read()
{
	cin >> n >> k;
	for(int i = 0; i < n; i++)
	{
		int mask = 0;
		for(int j = 0; j < k; j++)
		{
			int x;
			cin >> x;
			mask |= (x << j);
		}

		has[mask] = 1;
	}
}

void solve()
{
	for(int j = 0; j < (1 << k); j++)
		for(int i = 0; i < (1 << k); i++)
			if(has[i] && has[j] && ((i & j) == 0))
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

