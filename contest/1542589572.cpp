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
	char pass[3];
	cin >> pass;
	int N;
	cin >> N;
	char list[N][3];
	for (int i = 0; i < N; ++i)
	{
		cin >> list[i];
	}

	for (int i = 0; i < N; ++i)
	{
		if (!strcmp(pass, list[i]))
		{
			cout << "YES";
			return 0;
		}
	}
	bool first = false, sec = false;
	for (int i = 0; i < N; ++i)
	{
		if (pass[1] == list[i][0])
		{
			first = true;
			break;
		}
	}
	if (first)
	{
		for (int i = 0; i < N; ++i)
		{
			if (pass[0] == list[i][1])
			{
				sec = true;
				break;
			}
		}
	}
	if (sec)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
