#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define all(x) begin(x),end(x)
#define F(i,n) for (int i = 0; i < n; ++i)
#define F1(i,n) for (int i = 1; i <= n; ++i)
#define dbg(x) cerr << #x << " = " << x << endl
#define dbgg(x) cerr << #x << " = " << x << ' '
#define T(x) x[pool]
#define mineq(x,y) { if ((x) > (y)) (x) = (y); }
#define maxeq(x,y) { if ((x) < (y)) (x) = (y); }
#define MEOW cout << "meowwwww" << '\n'; system("pause");
#define int long long
using namespace std;
typedef vector<int> vi;
typedef pair<int, int> pii;

template<typename T>
ostream& operator <<(ostream &s, const vector<T> &c)
{
	s << "[ "; for (auto it : c) s << it << " "; s << "\b]\n";
	return s;
}

template<typename T>
ostream& operator <<(ostream &s, const pair<int, T> &c)
{
	s << "[ "; cout << c.fi << " , " << c.se << " ] ";
	return s;
}

int n;
string a;

void input()
{
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> a;
	cin >> n;
}

void solve()
{
	int b0 = 0, b1 = 0;
	F (i, n)
	{
		string s; cin >> s;
		if (s[0] == a[1]) b0 = 1;
		if (s[1] == a[0]) b1 = 1;
		if (s[0] == a[0] && s[1] == a[1]) b0 = b1 = 1;
	}
	if (b0 && b1) cout << "YES\n";
	else cout << "NO\n";
}

main()
{
	input();
	solve();
}