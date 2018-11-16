#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define ll long long int
#define ld long double
#define pb push_back
#define mkp make_pair
#define pii pair<int, int> 
#define pll pair<long long int, long long int>
#define sci(x) scanf("%d", &x)
#define scl(x) scanf("%lld", &x)
#define fi first
#define sc second
#define eps 1e-9

int main()
{
	ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);

	ll n, ans = 0;
	cin >> n;
	ans += (n / 100); n %= 100;
	ans += (n / 20); n %= 20;
	ans += (n / 10); n %= 10;
	ans += (n / 5); n %= 5;
	ans += n;
	cout << ans << endl;

	return 0;
}
