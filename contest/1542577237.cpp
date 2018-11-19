#include <bits/stdc++.h>
#define l first
#define r second
using namespace std;
typedef long long ll;
const int MAXN = 250;
const int MAX_ANS = 100;
const int INF = 1e9;

int n, m;
string s[MAXN];
bool used_all_strings[MAXN][MAX_ANS + 1];
set <string> all_strings[MAXN][MAX_ANS + 1];
int ans[MAXN];
ll lens[MAXN];
pair <int, int> par[MAXN];

void push_all_strings(string &s, int len, set<string> &pl)
{
	if (s.size() >= len) {
		for (int i = 0; i + len - 1 < (int)s.size(); i++) {
			pl.insert(s.substr(i, len));
		}
	}
}

bool get_suf(int ind, int len, string &t)
{
	if (par[ind].l == 0 && par[ind].r == 0) {
		if (s[ind].size() >= len)
			t = s[ind].substr(s[ind].size() - len, len);
		return s[ind].size() >= len;
	}
	else
	{
		return get_suf(par[ind].r, len, t);
	}
}

bool get_pref(int ind, int len, string &t)
{
	if (par[ind].l == 0 && par[ind].r == 0) {
		if (s[ind].size() >= len)
			t = s[ind].substr(0, len);
		return s[ind].size() >= len;
	}
	else
	{
		return get_pref(par[ind].l, len, t);
	}
}

void get_all_strings(int ind, int len)
{
	if (used_all_strings[ind][len])
		return;
	// cout << ind << ' ' << len << '\n';
	used_all_strings[ind][len] = 1;


	if (par[ind].first == 0 && par[ind].second == 0)
	{
		push_all_strings(s[ind], len, all_strings[ind][len]);
		return;
	}

	if (lens[ind] < 200)
	{ 
		s[ind] = s[par[ind].l] + s[par[ind].r];
	
		// cout << s[par[ind].l] << '+' << s[par[ind].r] << '=' << s[ind] << '\n';
		par[ind].l = par[ind].r = 0;
	}

	if (par[ind].first == 0 && par[ind].second == 0)
	{
		// cout << "!";
		// cout << s[ind] << "!";
		push_all_strings(s[ind], len, all_strings[ind][len]);
	}
	else
	{
		get_all_strings(par[ind].first, len);
		get_all_strings(par[ind].second, len);

		for (auto t : all_strings[par[ind].first][len])
			all_strings[ind][len].insert(t);
		for (auto t : all_strings[par[ind].second][len])
			all_strings[ind][len].insert(t);

		for (int left = 1; left < len; left++) {
			string s1, s2;
			if (get_suf(par[ind].first, left, s1) && get_pref(par[ind].second, len - left, s2)) {
				all_strings[ind][len].insert(s1 + s2);
			}
		}
	}
}

bool update(int ind, int len) 
{
	get_all_strings(ind, len);
	return all_strings[ind][len].size() == (1 << len);
}

int main()
{                                                     
	ios_base::sync_with_stdio(0);
	
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> s[i];
		lens[i] = s[i].size();

		// while (update(i, ans[i] + 1)) {
			// ans[i]++;
		// }
	}
	
	cin >> m;

	for (int i = 0; i < m; i++)
	{
		int ind = n + i + 1;
		int l, r;
		cin >> l >> r;
		par[ind] = {l, r};
		lens[ind] = min((ll)INF, lens[l] + lens[r]);
		// cout << lens[ind] << '\n';

		int res = 0;
		while (update(ind, res + 1)) {
			res++;
		}

		// cout << s[ind] << ' ';
		cout << res << '\n';
	}

	return 0;
}
