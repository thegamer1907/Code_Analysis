#include <iostream>
#include <cstring>
#include <set>
using namespace std;

string pref[300], suf[300];
set<string> st[300][10];

string get_pref(string s)
{
	return s.substr(0, 10);
}

string get_suf(string s)
{
	if(s.size() > 10)
		return s.substr(s.size() - 10, 10);
	return s;
}

void process(string s, int idx)
{
	for(int i=0; i<s.size(); i++)
	{
		string temp = "";
		for(int j=i; j<s.size(); j++)
		{
			temp += s[j];
			if(temp.size() > 10) break;
			st[idx][temp.size()].insert(temp);
		}
	}
}

void merge(int x, int y, int idx)
{
	for(int i=1; i<=10; i++)
	{
		for(auto itr : st[x][i])
			st[idx][i].insert(itr);

		for(auto itr : st[y][i])
			st[idx][i].insert(itr);
	}
}

int get_ans(int idx)
{
	int ans = 10;

	while(ans)
	{
		if(st[idx][ans].size() == (1<<ans))
			return ans;
		ans--;
	}
	return ans;
}

int main()
{
	int n,m;
	cin >> n;

	for(int i=1; i<=n; i++)
	{
		string str;
		cin >> str;
		pref[i] = get_pref(str);
		suf[i] = get_suf(str);
		process(str, i);
	}

	cin >> m;

	for(int i=n+1; i <= n+m; i++)
	{
		int x,y;
		cin >> x >> y;
		string str = suf[x] + pref[y];
		merge(x,y,i);
		process(str, i);

		pref[i] = get_pref(pref[x] + pref[y]);
		suf[i] = get_suf(suf[x] + suf[y]);

		cout << get_ans(i) << endl;
	}
	return 0;
}
