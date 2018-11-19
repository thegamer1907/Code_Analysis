#include <bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long int
#define pb push_back
#define ins insert
#define pb push_back
#define fi first
#define se second
#define pos_max 17
#define sel_max 14

using namespace std;

int n, k;
vector <int> ct;
int extra[pos_max][5];

map <vector <int>, bool> memo[pos_max+1][sel_max+1];

bool dp(int pos, int sel, vector <int> s)
{
	if(memo[pos][sel].find(s) != memo[pos][sel].end())
		return memo[pos][sel].find(s)->se;
	bool flag = 0;

	for(int i = 0; i < s.size(); i++)
	{
		if(s[i]*2 > sel || sel == 0)
			flag = 1;
	}

	//pf("@(%d, %d, (%d, %d, %d, %d)\t%d\n", pos, sel, s[0], s[1], s[2], s[3], flag);
	if(flag == 0)
	{
		memo[pos][sel][s] = 1;
		return 1;
	}
	if(sel > sel_max || sel >= n || pos >= ct.size())
		return 0;

	flag = dp(pos+1, sel, s);
	if(flag == 1)
	{
		memo[pos][sel][s] = 1;
			return 1;
	}
	vector <int> new_s = s;
	for(int i = 1; i <= ct[pos]; i++)
	{
		for(int j = 0; j < k; j++)
			new_s[j] += extra[pos][j];

		bool t_flag = dp(pos+1, sel+i, new_s);
		if(t_flag == 1)
		{
			memo[pos][sel][s] = 1;
			return 1;
		}
	}
	memo[pos][sel][s] = 0;
	return 0;
}

int main()
{
	cin >> n >> k;
	for(int i = 0; i < (1<<k); i++)
	{
		ct.pb(0);
		for(int j = 0; j < k; j++)
		{
			if(((1<<j)&i) != 0)
				extra[i][j] = 1;
			else
				extra[i][j] = 0;
		}
	}
	for(int i = 0; i < n; i++)
	{
		int bin = 0;
		for(int j = 0; j < k; j++)
		{
			int tmp;	sf("%d", &tmp);
			if(tmp == 1)
			{
				bin += (1<<j);
			}
		}
		ct[bin] = min(ct[bin]+1, 13);
	}

	vector <int> selected;
	for(int i = 0; i < k; i++)
		selected.pb(0);

	/*for(int i = 0; i < ct.size(); i++)
	{
		pf("%d, %d, (%d, %d, %d, %d)\n", i, ct[i], extra[i][0], extra[i][1], extra[i][2], extra[i][3]);
	}*/
	bool ans = dp(0, 0, selected);
	if(ans)
		pf("YES");
	else
		pf("NO");
	return 0;
}