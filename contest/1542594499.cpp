#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ls rt << 1
#define rs rt << 1 | 1
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define X first
#define Y second
#define pcc pair<char, char>
#define rep(i, x, y) for(int i = x; i <= y; i ++)
#define rrep(i, x, y) for(int i = x; i >= y; i --)
#define eps 1e-9
const int P = 29;
using namespace std;
inline int read()
{
	int x = 0, f = 1; char ch = getchar();
	while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getchar(); }
	while (ch >= '0' && ch <= '9') { x = x * 10 + ch - '0'; ch = getchar(); }
	return x * f;
}
const int N = 2e5 + 10;
string x, a[110];
int main()
{
	cin >> x;
	int n = read();
	rep(i, 1, n)
	{
		cin >> a[i];
		if(a[i] == x) {cout << "YES"; return 0;}
	}
	rep(i, 1, n)
	{
		if(a[i][1] == x[0])
			rep(j, 1, n)
				if(a[j][0] == x[1])
					{cout << "YES"; return 0;}
	}
	cout << "NO";
	return 0;
}
