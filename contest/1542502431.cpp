#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long int ll;

#define CLR(a) memset(a, 0, sizeof(a))
#define vii vector<pair<ll,ll> >
#define pii pair<ll,ll>
#define MOD 1000000007
#define fi first
#define sec second
#define pb push_back
#define REP(a, b) for(a = 0; a < b; a++)
#define REP2(a, b) for(a = 1; a <= b; a++)
#define all(a) a.begin(), a.end()
#define pq priority_queue

int main()
{
	ll n, k, i;
	cin >> n >> k;
	ll a[105], b[5];
	CLR(a); CLR(b);
	while(n--)
	{
		REP2(i, k)
		cin >> b[i];
		a[b[1]+b[2]*2+b[3]*4+b[4]*8] = 1;
	}
	for(ll i = 0; i <= (1 << 4); i++)
	{
		for(ll j = 0; j <= (1 << 4); j++)
		{
			if(!(j&i) && a[i] && a[j])
			{
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}