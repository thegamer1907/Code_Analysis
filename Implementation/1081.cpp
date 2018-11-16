// C++



#include <algorithm>
#include <iostream>
#include <string>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <queue>
#include <list>
#define NM 100000000000000;
using namespace std;
typedef long long ll;
//void sf(double r)
//{
//  if (fabs(l - r) / 2 > 10E-12)
//  {
//      ll t = l + r;
//      m = t / 2;
//      if (pow(m, n) > a)
//      {
//          r = m;
//
//      }
//      else l = m;
//
//      sf(r);
//  }
//}

const ll MAXN = 10000;
vector <bool> prime(MAXN ,1);
vector< ll > res;
void Erat()
{
	//fill(prime, prime + MAXN, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i < MAXN; ++i)
	{
		if (prime[i])
		{
			res.push_back(i);
			for (ll j = i + i; j < MAXN; j += i)
			{
				prime[j] = false;
			}
		}
	}
}

struct price
{
	ll p1, p2, p3;
	price() : p1(0), p2(0), p3(0) {};
};
bool IsPrime(ll a)
{
	if (a < 2) return false;

	ll aSqrt = sqrt((double)a) + 0.1;
	for (ll i = 2; i <= aSqrt; ++i)
	{
		if (a % i == 0) return false;
	}
	return true;
}
vector <ll> h(2*100000);
ll sum(ll l, ll r)
{
	ll summ = 0;
	for (ll i = l; i < r; i++)
	{
		summ += h[i] - h[r];
	}
	return summ;
}
int main()
{

	ll n;
	cin >> n;
	ll x;
	cin >> x;
	string s;
	cin >> s;
	for (ll j = 0; j < x; j++) {
		for (ll i = 1; i < n; i++)
		{
			if (s[i] == 'G' && s[i - 1] == 'B')
			{
				swap(s[i], s[i - 1]);
				i++;
			}
		}
	}
	cout << s;

	return 0;
}