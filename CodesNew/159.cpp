#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll power(ll a, ll b)	//a is base, b is exponent
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	if(b%2 == 1)
		return (power(a,b-1)*a);
	ll q = power(a,b/2);
	return (q*q);
}


ll solve(ll n, ll k)
{
	if(n == 1)
		return 1;

	if(k == power(2, n-1))
		return n;

	if(k > power(2, n-1))
		return solve(n-1, k-power(2, n-1));

	return solve(n-1, k);

}



int main()
{
	ll n, k;
	cin >> n >> k;

	

	cout << solve(n, k) << endl;
	


	return 0;
}