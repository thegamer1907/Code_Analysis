#include <bits/stdc++.h>
#define endl '\n'

//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

using namespace std;
template<class T, class T2> inline int chkmax(T &x, const T2 &y) { return x < y ? x = y, 1 : 0; }
template<class T, class T2> inline int chkmin(T &x, const T2 &y) { return x > y ? x = y, 1 : 0; }
const int MAXN = (1 << 20);

int h, m, s, t1, t2;

void read()
{
	cin >> h >> m >> s >> t1 >> t2;
}

void solve()
{
	h %= 12;
	t1 %= 12;
	t2 %= 12;

	if(t2 < t1) swap(t1, t2);
	
	double T1 = t1 / 12.0, T2 = t2 / 12.0;
	double H = (h * 3600 + m * 60 + s) / (double)(12 * 3600);
	double M = (m * 60 + s) / 3600.0;
	double S = s / 60.0;

	int cnt = 0;
	if(T1 < H && H < T2) cnt++;
	if(T1 < M && M < T2) cnt++;
	if(T1 < S && S < T2) cnt++;

	if(cnt == 0 || cnt == 3) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	read();
	solve();
	return 0;
}

