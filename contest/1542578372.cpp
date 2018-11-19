#include <bits/stdc++.h>

using namespace std;

#define MEM(arr,val)memset((arr),(val), sizeof (arr))
#define PI (acos(0)*2.0)
#define FASTER ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ALL(v)v.begin(),v.end()
#define PB(v)push_back(v)

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<long double> vd;
typedef vector<ii> vii;
typedef vector<ll> vl;


ll gcd(ll a,ll b){return b == 0 ? a : gcd(b,a%b);}
ll lcm(ll a,ll b){return a*(b/gcd(a,b));}

/**
 * __builtin_popcount(int d) // count bits
 * __builtin_popcountll(long long d)
 * strtol(s, &end, base); // convert base number
 */
//----------------------------------------------------------------------//



int main()
{
	FASTER;
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	double hd, md, sd, t1d, t2d;
	//cout << h  << " " << " " << m  << " " << s << endl;
	sd = s / 60.0;
	md = (m + sd) / 60.0;
	hd = (h + md) / 12.0;
	t1d = t1 / 12.0;
	t2d = t2 / 12.0;
	//cout << hd  << " " << " " << md  << " " << sd << endl;
	vd tim = {hd, md, sd, t1d, t2d};
	//for (int i = 0; i < 5; ++i) cout << tim[i] << " "; cout << endl;
	sort(tim.begin(), tim.end());
	//for (int i = 0; i < 5; ++i) cout << tim[i] << " "<<  (tim[i] == t1d || tim[i] == t2d) << " "; cout << endl;
	for (int i = 0; i < 4; ++i)
	{
		if ((tim[i] == t1d || tim[i] == t2d) && (tim[i+1] == t1d || tim[i+1] == t2d))
		{
			cout << "YES";
			return 0;
		}
	}
	if ((tim[0] == t1d || tim[0] == t2d) && (tim[4] == t1d || tim[4] == t2d))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}