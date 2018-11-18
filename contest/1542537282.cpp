#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <cstring>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <bitset>
#include <ctime>
#include<complex>
using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it, a) for(typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a, value) memset(a, value, sizeof(a))

#define SZ(a) (int) a.size()
#define ALL(a) a.begin(),a.end()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const LL INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;

const int MAX = 100 * 1000 + 47;
const int MIN = 20 + 7;

LL dp[MIN][MAX];
int A[MAX];

struct Solver
{
	LL C[MAX];
	int L = 0, R = -1;
	LL ANS = 0;

	void add(int x, int val)
	{
		ANS -= C[x] * (C[x] - 1) / 2;
		C[x] += val;
		//cout << x << ": " << C[x] << endl;
		ANS += C[x] * (C[x] - 1) / 2;
		//cout << L << " " << R << ": " << ANS << endl;
	}

	void upd(int l, int r)
	{
		while (L < l)
		{
			add(A[L], -1);
			L++;
		}

		while (r < R)
		{
			add(A[R], -1);
			R--;
		}

		while (l < L)
		{
			L--;
			add(A[L], 1);
		}

		while (R < r)
		{
			R++;
			add(A[R], 1);
		}
	}
} S;

void f(int l, int r, int L, int R, int k)
{
	if (l > r) return;

	int m = (l + r) / 2;
	LL val = LINF;
	int pos = -1;

	FOR(i, L, min(R, m) + 1)
	{
		//cout << "!" << i << " " << m << endl;
		S.upd(i, m);

		LL tmp = S.ANS;
		if (i) tmp += dp[k - 1][i - 1];
		//cout << "!" << i << " " << m << ": " << tmp << endl;

		if (val > tmp)
		{
			val = tmp;
			pos = i;
		}
	}

	dp[k][m] = val;
	f(l, m - 1, L, pos, k);
	f(m + 1, r, pos, R, k);
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	//ios::sync_with_stdio(false); cin.tie(0);

	int n, k;
	cin >> n >> k;
	FOR(i, 0, n)
	{
		cin >> A[i];
		A[i]--;
	}

	//{
	//	S.upd(0, 4);
	//	cout << S.L << " " << S.R << endl;
	//	cout << S.ANS << endl;
	//	return 0;
	//}


	FOR(i, 0, k + 1)
	{
		FOR(j, 0, n) dp[i][j] = LINF;
	}

	FOR(i, 1, k + 1)
	{
		f(0, n - 1, 0, n - 1, i);
		//cout << i << ": " << endl;
		//FOR(j, 0, n)
		//{
		//	cout << dp[i][j] << " ";
		//}
		//cout << endl;
	}

	cout << dp[k][n - 1] << endl;
}
