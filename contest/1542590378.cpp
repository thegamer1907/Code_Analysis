#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define fastScan ios_base::sync_with_stdio(0); cin.tie(NULL);
#define ABS(x) ((x) < 0 ? -1*(x) : (x))
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define mp make_pair
#define pb push_back
#define MOD 1000000007
#define INF 2000000000
#define BINF 20000000000000000LL
#define trace(x)                 cerr << #x << ": " << x << endl;
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> pl;
const ld PI = acos(-1.0);

string str;
vector<string> given;
int main()
{
	fastScan;

	ll N,i,j,k;
	cin >> str;
	cin >> N;
	for(i = 0; i < N; ++i)
	{
		string x; cin >> x;
		given.pb(x);
	}

	for(i = 0; i < N; ++i)
	{
		for(j = 0; j < N; ++j)
		{
			string x = given[i]+given[j];
			for(k = 0; k < 3; ++k)
			{
				if(x.substr(k,2) == str)
					break;
			}
			if(k < 3)
			{
				cout << "YES";
				return 0;
			}
		}
	}
	
	cout << "NO";

	return 0;
}