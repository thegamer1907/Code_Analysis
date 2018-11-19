#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <iterator>
#include <bitset>
#include <vector>
#include <math.h>
#include <queue>
#include <map>
#include <set>
#include <list>
#include <time.h>
#include <algorithm>
#define mkp make_pair
#define inf 1000000010
#define MOD 1000000007
#define MOD2 1000000013
#define eps 1e-11
#define PI 3.14

using namespace std;
typedef long long ll;

int n, q;

struct str
{
	string l, r;
	bool was[16][50000];
	int cnt[16];
	int ans;
}s[220];

int main()
{
	ios_base::sync_with_stdio(0);
	//ifstream cin("in.txt");
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		for (int j = 0; j < min(15, (int)x.size()); j++)
		{
			s[i].l += x[j];
			s[i].r += x[x.size() - min(15, (int)x.size()) + j];
		}
		for (int j = 1; j < 16; j++)
			s[i].cnt[j] = (1 << j);
		for (int l = 0; l < x.size(); l++)
		{
			int val = 0;
			for (int r = l; r < x.size() && r - l + 1 <= 15; r++)
			{
				val <<= 1;
				val += x[r] - '0';
				if (!s[i].was[r - l + 1][val])
				{
					s[i].was[r - l + 1][val] = 1;
					s[i].cnt[r - l + 1]--;
					if (!s[i].cnt[r - l + 1])
						s[i].ans = max(s[i].ans, r - l + 1);
				}
			}
		}
	}
	cin >> q;
	for (int it = 0; it < q; it++)
	{
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		for (int i = 1; i < 16; i++)
			s[n + it].cnt[i] = (1 << i);
		s[n + it].l = s[a].l;
		while (s[n + it].l.size() < 15 && s[n + it].l.size() < s[a].l.size() + s[b].l.size())
			s[n + it].l += s[b].l[s[n + it].l.size() - s[a].l.size()];
		int need = 15 - s[b].r.size();
		for (int i = max(0, (int)s[a].r.size() - need); i < s[a].r.size(); i++)
			s[n + it].r += s[a].r[i];
		s[n + it].r += s[b].r;
		string x = s[a].r + s[b].l;
		for (int l = 0; l < s[a].r.size(); l++)
		{
			int val = 0;
			for (int r = l; r < s[a].r.size(); r++)
			{
				val <<= 1;
				val += x[r] - '0';
			}
			for (int r = s[a].r.size(); r < x.size() && r - l + 1 <= 15; r++)
			{
				val <<= 1;
				val += x[r] - '0';
				if (!s[n + it].was[r - l + 1][val])
				{
					s[n + it].was[r - l + 1][val] = 1;
					s[n + it].cnt[r - l + 1]--;
					if (!s[n + it].cnt[r - l + 1])
						s[n + it].ans = max(s[n + it].ans, r - l + 1);
				}
			}
		}
		for (int i = 0; i < 16; i++)
		{
			for (int j = 0; j < (1 << i); j++)
			{
				if ((s[a].was[i][j] || s[b].was[i][j]) && !s[n + it].was[i][j])
				{
					s[n + it].was[i][j] = 1;
					s[n + it].cnt[i]--;
					if (!s[n + it].cnt[i])
						s[n + it].ans = max(s[n + it].ans, i);
				}
			}
		}
		cout << s[n + it].ans << endl;
	}
}