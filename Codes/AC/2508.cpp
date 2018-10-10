//Be Name Khoda
//me and who? :|
/*
ID: aminra81
PROG: gift1
LANG: C++11
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
const ll MOD = 1e9 + 7;
const ll inf = (ll)1e18;
const int infint = (int)2e9;
const int MAXN = (int)1e7 + 1;
bool visited[MAXN];
int partial[MAXN];
int A[MAXN];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		A[tmp]++;
	}
	for (int i = 2; i < MAXN; i++)
	{
		if(!visited[i])
		{
			for (int j = i; j < MAXN; j += i)
			{
				visited[j] = true;
				partial[i] += A[j];
			}
		}
	}
	for (int i = 2; i < MAXN; i++)
		partial[i] += partial[i - 1];
	int m;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int l, r;
		cin >> l >> r;
		if(l >= MAXN)
		{
			cout << 0 << "\n";
			continue;
		}
		r = min(r, MAXN - 1);
		cout << partial[r] - partial[l - 1] << "\n";
	}
}

