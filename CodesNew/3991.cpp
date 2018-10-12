#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdlib>
#include <vector>
#include <queue>
#include <set>
#include <map>

#define SWS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define ft first
#define sd second 
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define files read; write

using namespace std; 

typedef long long ll;
typedef unsigned long long ull;
typedef vector < int > vi;
typedef pair < int, int > pairt;

const int Z = (int)3e3 + 111;
const int N = (int)3e5 + 111;
const int INF = (int)1e9 + 111;
const int MOD = (int)1e9 + 7;

int main()
{
//	files;
	SWS;
	int n, q;
	cin >> n >> q;
	ll x;
	cin >> x;
	vector<ll> pref(n, (ll)0);
	pref[0] = x;
//	cout << pref[0] << endl;
	for (int i = 1; i < n; i++)
	{
		cin >> x;
		pref[i] = pref[i - 1] + x;
	}
//	for (int i = 0; i < n; i++)
//		cout << pref[i] << ' ';
//	cout << endl;
	ll sum(0);
	while (q--)
	{
		cin >> x;
		sum += x;
		int pos = (int)(upper_bound(pref.begin(), pref.end(), sum) - pref.begin());
		if (pos == n)
		{
			sum = 0;
			pos = 0;
		}
		cout << n - pos << endl;
	}
	return 0;
}