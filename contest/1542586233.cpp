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
int n, k, cnt;
int a[20];
int main()
{
	n = read();
	k = read();
	rep(i, 1, n)
	{
		int x = 0, base = 1;
		rep(j, 1, k)
		{
			int p = read();
			x = x * base + p;
			base *= 2;
		}
		//cout << x << endl;
		bool flag = 0;
		rep(j, 1, cnt)
			if(a[j] == x)
				flag = 1;
		if(!flag) a[++ cnt] = x;
	}
	//cout << (1 & 2) << endl;
	//cout << cnt << endl;
	//rep(i, 1, cnt) cout << a[i] << " ";
	rep(i, 1, cnt)
		rep(j, 1, cnt)
			if((a[i] & a[j]) == 0)
				{cout << "YES" << endl; return 0;}
	cout << "NO";
	return 0;
}
