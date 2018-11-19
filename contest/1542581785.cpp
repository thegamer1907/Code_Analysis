#include<bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define int long long
#define endl '\n'
#define pi acos(-1)
#define pque priority_queue
#define N 1000000
#define lmax LONG_LONG_MAX
typedef pair < int, int > ii;
typedef vector < int > vi;
typedef vector < vi > vii;
int mod = 1000000007;
int n, k, f[100009][5], num[3][3][3][3];
signed main()
{
	ios_base::sync_with_stdio(0);
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= k; j++)
			cin >> f[i][j];
		num[f[i][1]][f[i][2]][f[i][3]][f[i][4]] ++;
	}
	for(int i = 1; i <= n; i++)
	{
		int a = f[i][1];
		int b = f[i][2];
		int c = f[i][3];
		int d = f[i][4];
		num[a][b][c][d] --;
		for(int j = 0; j < (2 << 4); j++)
		{
			int a1 = min(1LL, (j & (1 << 0)));
			int b1 = min(1LL, (j & (1 << 1)));
			int c1 = min(1LL, (j & (1 << 2)));
			int d1 = min(1LL, (j & (1 << 3)));
			if(a1 + a > 1 || b1 + b > 1 || c1 + c > 1 || d1 + d > 1)
				continue;
			if(num[a1][b1][c1][d1] > 0)
			{
				cout << "YES";
				return 0;
			}
		}
		num[a][b][c][d] ++;
	}
	if(num[0][0][0][0] > 0)
		cout << "YES";
	else
		cout << "NO";
}

