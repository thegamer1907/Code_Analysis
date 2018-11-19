#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define eb emplace_back
#define all(a) begin(a), end(a)
#define has(a, b) (a.find(b) != a.end())
#define fora(i, n) for(int i = 0; i < n; i++)
#define forb(i, n) for(int i = 1; i <= n; i++)
#define forc(a, b) for(const auto &a : b)
#define ford(i, n) for(int i = n; i >= 0; i--)
#define maxval(t) numeric_limits<t>::max()
#define minval(t) numeric_limits<t>::min()
#define imin(a, b) a = min(a, b)
#define imax(a, b) a = max(a, b)

#define dbgs(x) #x << " = " << x
#define dbgs2(x, y) dbgs(x) << ", " << dbgs(y)
#define dbgs3(x, y, z) dbgs2(x, y) << ", " << dbgs(z)
#define dbgs4(w, x, y, z) dbgs3(w, x, y) << ", " << dbgs(z)

using ll = long long;

constexpr int magic = 20;

struct dat
{
	bool isAll;
	string all;
	string beg;
	string end;
	set<int> seen[magic];
};

dat f[200];

void work(const string &s, int i)
{
	fora(j, s.length())
	{
		int c = 0;
		fora(k, magic)
		{
			if (j + k == s.length())
				break;
			c = 2 * c + (s[j + k] - '0');
			f[i].seen[k].insert(c);
		}
	}
}

void handle(const string &s, int i)
{
	work(s, i);

	if (s.length() < magic)
	{
		f[i].isAll = true;
		f[i].all = s;
	}
	else
	{
		f[i].beg = s.substr(0, magic);
		f[i].end = s.substr(s.length() - magic, magic);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;

	fora(i, n)
	{
		string s;
		cin >> s;

		handle(s, i);
	}

	int m;
	cin >> m;

	fora(i, m)
	{
		int a, b;
		cin >> a >> b;
		--a; --b;

		int d = n + i;

		if (f[a].isAll && f[b].isAll)
		{
			handle(f[a].all + f[b].all, d);
		}
		else if (f[a].isAll)
		{
			f[d].end = f[b].end;
			f[d].beg = f[a].all + f[b].beg.substr(0, magic - f[a].all.length());

			work(f[a].all + f[b].beg, d);
		}
		else if (f[b].isAll)
		{
			f[d].beg = f[a].beg;
			f[d].end = f[a].end.substr(f[b].all.length(), magic - f[b].all.length()) + f[b].all;

			work(f[a].end + f[b].all, d);
		}
		else
		{
			f[d].beg = f[a].beg;
			f[d].end = f[b].end;

			work(f[a].end + f[b].beg, d);
		}

		fora(k, magic)
		{
			f[d].seen[k].insert(all(f[a].seen[k]));
			f[d].seen[k].insert(all(f[b].seen[k]));
		}

		int k = 0;
		while (k < magic && f[d].seen[k].size() == (1 << (k + 1)))
			++k;
		cout << k << endl;
	}

	/*fora(i, n + m)
	{
		cout << "Index " << i << ": " << endl;
		if (f[i].isAll)
		{
			cout << "all " << f[i].all << endl;
		}
		else
		{
			cout << "beg " << f[i].beg << endl;
			cout << "end " << f[i].end << endl;
		}

		forb(k, magic)
		{
			cout << "len " << k << ": ";
			forc(t, f[i].seen[k - 1])
			{
				cout << t << " ";
			}
			cout << endl;
		}
		cout << endl;
	}*/
}














		/*cout << s << ": " << endl;

		cout << endl;*/
