#include<bits/stdc++.h>
#define _for(i, n) for(int i=0 ; i<n ; i++)
#define _forr(i, n) for(int i=1 ; i<=n ; i++)
#define _rof(i, n) for(int i=n-1 ; i>-1 ; i--)
#define _roff(i, n) for(int i=n ; i>0 ; i--)
#define _all(x) x.begin(), x.end()
#define NL cout << endl;
#define SP cout << " ";
#define BIG 41111
#define ss second
#define ff first
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;

int main()
{
	ll n, t, a[BIG];
	cin >> n >> t;
	_forr(i, n - 1)
        cin >> a[i];
	for (int i = 1; i <= n;)
	{
		ll temp = a[i] + i;
		i = temp;
		if (i == t)
		{
			cout << "YES", NL;
			return 0;
		}
		else if(i>t)
		{
			cout << "NO"; NL;
			return 0;
		}
	}
	return 0;
}
