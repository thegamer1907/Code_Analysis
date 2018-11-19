# pragma GCC optimize("O3")
# include <bits/stdc++.h>
# define maxn 100005
# define ll long long
# define clock (clock() * 1000.0 / CLOCKS_PER_SEC)
# define rc(s) return cout << s,0
# define _ ios_base::sync_with_stdio(false);cin.tie(0);cerr.tie(0);cout.tie(0);
# define db(x) cerr << #x << " = " << x << '\n'
# define pb push_back
# define mp make_pair
# define sz(x) (int)((x).size())
//# define int ll
using namespace std;

int h,m,s,t1,t2;

int32_t main(){_
    //freopen("input1","r",stdin);
	cin >> h >> m >> s;
	cin >> t1 >> t2;
	int p1 = h;
	int p2 = m / 5;
	int p3 = s / 5;
	if(p1 == 12) p1 = 0;
	if(p2 == 12) p2 = 0;
	if(p3 == 12) p3 = 0;
	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;
	bool b = 1;
	for(int i = t1;i != t2;i++)
	{
		if(i == 12) i = 0;
		if(i == t2) break;
		if(p1 == i || p2 == i || p3 == i) b = 0;
	}
	if(b) rc("YES");
	b = 1;
	swap(t1,t2);
	for(int i = t1;i != t2;i++)
	{
		if(i == 12) i = 0;
		if(i == t2) break;
		if(p1 == i || p2 == i || p3 == i) b = 0;
	}
	if(b) rc("YES");
	rc("NO");
}