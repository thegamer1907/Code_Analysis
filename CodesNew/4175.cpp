#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
typedef long long ll;

const int maxn = 2e5 + 10;
ll n , q , a[maxn] , b[maxn];

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	cin >> n >> q;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<q;i++) cin >> b[i];
	for(int i=1;i<n;i++) a[i] = a[i-1] + a[i];
	ll curdmg = 0;
	for(int i=0;i<q;i++)
	{
		curdmg += b[i];
		int idx = upper_bound(a , a + n , curdmg) - a;
		if(idx < n)
		{
			cout << n - idx << endl;
		}
		else
		{
			cout << n << endl;
			curdmg = 0;
		}
	}
}