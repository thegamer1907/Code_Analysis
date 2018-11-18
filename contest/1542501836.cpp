#include <bits/stdc++.h>
#define endl '\n'

//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

using namespace std;
template<class T, class T2> inline int chkmax(T &x, const T2 &y) { return x < y ? x = y, 1 : 0; }
template<class T, class T2> inline int chkmin(T &x, const T2 &y) { return x > y ? x = y, 1 : 0; }
const int MAXN = (1 << 8);
const int MAXK = (1 << 18);

struct state
{
	string pref, suff;
	bitset<MAXK> bs[20];
	
	state() { }
	
	state(string s)
	{
		pref = suff = s;
		while(pref.size() > 20) pref.pop_back();
		reverse(suff.begin(), suff.end());
		while(suff.size() > 20) suff.pop_back();
		reverse(suff.begin(), suff.end());
		bs[0][0] = 1;

		for(int i = 0; i < (int)s.size(); i++)
		{
			int mask = 0;
			for(int l = 1; l <= 18 && i - l + 1 >= 0; l++)
			{
				mask |= (s[i - l + 1] - '0') << (l - 1);				
				bs[l][mask] = 1;
			}			
		}
	}

	void push_back(const state &oth)
	{
		for(int i = 0; i < 20; i++)
			bs[i] |= oth.bs[i];

		string mid = suff + oth.pref;
		string nw_pref = pref, nw_suff = oth.suff;
		
		if(nw_pref.size() < 20) nw_pref = nw_pref + oth.pref;
		if(nw_suff.size() < 20) nw_suff = suff + nw_suff;

		while(nw_pref.size() > 20) nw_pref.pop_back();
		reverse(nw_suff.begin(), nw_suff.end());
		while(nw_suff.size() > 20) nw_suff.pop_back();
		reverse(nw_suff.begin(), nw_suff.end());

		pref = nw_pref;
		suff = nw_suff;

		state oth2 = state(mid);
		for(int i = 0; i < 20; i++)
			bs[i] |= oth2.bs[i];
	}
};

int n;
string s[MAXN];
state st[MAXN];

void read()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> s[i];
		st[i] = state(s[i]);
	}
}

void solve()
{
	int m;
	cin >> m;
	for(int i = 1; i <= m; i++)
	{
		int x, y;
		cin >> x >> y;
		st[++n] = st[x];
		st[n].push_back(st[y]);

		int ans = 0;
		while((int)st[n].bs[ans].count() == (1 << ans)) 
			ans++;
		
		cout << ans - 1 << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	read();
	solve();
	return 0;
}

