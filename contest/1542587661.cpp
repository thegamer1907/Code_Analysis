#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pii pair < int , int >
#define pipii pair < int , pii >
#define pid pair <int, double>
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define pp pop_back()
#define sz size()
#define iz insert
#define lg length()
#define FRNAME "A"
#define inf (int)1e6
#define fr freopen(FRNAME".in","r",stdin); freopen (FRNAME".out","w",stdout);
#define fr2 freopen("input.txt","r",stdin); freopen ("output.txt","w",stdout) 
double h, m, s, t1, t2;
long double ha, ma, sa, t1a, t2a;
int main ()
{
	cin >> h >> m >> s >> t1 >> t2;
	if(h == 12) h = 0;
	if(t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;

	ha = h*30.0 + m * 0.5 + ((double) s / 3600.0);
	ma = m*6.0 + s/10.0;
	sa = s*6.0;
	t1a = t1*30.0;
	t2a = t2*30.0;
//	cout << ha << " " << ma << " " << sa << "  " << t1a << " " << t2a;
	vector<	pair <double, int> > need;
	need.pb(mp(ha,0));
	need.pb(mp(ma,0));
	need.pb(mp(sa,0));
	need.pb(mp(t1a,1));
	need.pb(mp(t2a,1));
	sort(need.begin(),need.end());
	for (int i = 0; i + 1 < need.sz; i++)
	{
		if(need[i].S == 1 && need[i+1].S == 1)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << ((need[0].S == 1 && need[4].S == 1) ? "YES" : "NO");	
	return 0;
}
