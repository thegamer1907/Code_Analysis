#pragma comment(linker, "/STACK:256000000")

#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_DEPRECATE 
#define _CRT_SECURE_NO_WARNINGS 

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <cstring>
#include <string>
#include <utility>
#include <vector>
#include <fstream>
#include <iterator>
#include <functional>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <ctime>
#include <bitset>  


#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep0(i,n) for (int i=0; i<int(n); ++i)
#define rep0r(i,n) for (int i=n-1; i>=0; --i)
#define repa(i,a,b) for (int i=(a); i<int(b); ++i)
#define sq(x) ((x)*(x))
#define pi 3.141592653589793238462643383279502884197169399375105820974944
#define pii pair<int, int>
#define pll pair<long long, long long>
#define rs resize


using namespace std;


typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


const long double EPS = 1e-12;
const int maxnn = 2*1e5 + 10;
const long long modd = 1e9 + 7;

//int n, tox, toy, xr, yr, xdif, ydif;
//string s;
//ll addl, addr, addu, addd;
//int ml[maxnn], mr[maxnn], mu[maxnn], md[maxnn];

string s;
int n;
int m;
int l, r;
vector<ll> a;

int main()
{

#ifdef _MY_DEBUG
	freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif // _MY_DEBUG

	ios_base::sync_with_stdio(false); cin.tie(0);
	//cout.precision(16);
	//cout.setf(ios::fixed, ios::floatfield);
	//freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
	//srand(time(NULL));
	//fflush (stdout);

	cin >> s;
	n = s.size();
	a.rs(n + 1);
	a[0] = 0;
	rep0(i, n-1)
	{
		a[i + 1] = a[i];
		if (s[i] == s[i + 1])
		{
			a[i + 1]++;
		}
	}
	a[n] = a[n - 1];

	cin >> m;
	rep0(i, m)
	{
		cin >> l >> r;
		cout << a[r - 1] - a[l - 1] << endl;
	}


	//cin >> n >> s >> tox >> toy;

	//rep0(i, n)
	//{
	//	if (s[i] == 'R')
	//	{
	//		xr++;
	//	}
	//	if (s[i] == 'D')
	//	{
	//		yr--;
	//	}
	//	if (s[i] == 'L')
	//	{
	//		xr--;
	//	}
	//	if (s[i] == 'U')
	//	{
	//		yr++;
	//	}
	//}

	//xdif = tox - xr;
	//ydif = toy - yr;

	//ll ans = 1e9 + 10;
	//
	//if (abs(xdif) + abs(ydif) > n)
	//{
	//	cout << -1;
	//	return 0;
	//}

	//if ((xdif % 2 == 0) && (ydif % 2 == 0))
	//{
	//	if (xdif < 0)
	//	{
	//		addl = abs(xdif)/2;
	//		ml[0] = addl;
	//	}
	//	if (xdif > 0)
	//	{
	//		addr = xdif/2;
	//		mr[0] = addr;
	//	}
	//	if (ydif < 0)
	//	{
	//		addd = abs(ydif)/2;
	//		md[0] = addd;
	//	}
	//	if (ydif > 0)
	//	{
	//		addu = ydif/2;
	//		mu[0] = addu;
	//	}

	//	ll all = abs(xdif) + abs(ydif);
	//	if (all % 2 != 0)
	//	{
	//		cout << -1;
	//		return 0;
	//	}
	//	all /= 2;
	//	ll l = 0;
	//	ll r = 1;
	//	ll curcnt = 0;
	//	ll curadd = 0;
	//	bool start = false;
	//	while (l <= r)
	//	{
	//		if (s[r - 1] == 'R')
	//		{
	//			if (ml[r - 1] > 0)
	//			{
	//				ml[r] = ml[r - 1] - 1;
	//				curadd++;
	//				start = true;
	//			}
	//			else
	//			{
	//				ml[r] = ml[r - 1] ;
	//			}
	//			mr[r] = mr[r - 1];
	//			mu[r] = mu[r - 1];
	//			md[r] = md[r - 1];
	//		}
	//		if (s[r - 1] == 'D')
	//		{
	//			if (mu[r - 1] > 0)
	//			{
	//				mu[r] = mu[r - 1] - 1;
	//				curadd++;
	//				start = true;
	//			}
	//			else
	//			{
	//				mu[r] = mu[r - 1];
	//			}
	//			mr[r] = mr[r - 1];
	//			ml[r] = ml[r - 1];
	//			md[r] = md[r - 1];
	//		}
	//		if (s[r - 1] == 'L')
	//		{
	//			if (mr[r - 1] > 0)
	//			{
	//				mr[r] = mr[r - 1] - 1;
	//				curadd++;
	//				start = true;
	//			}
	//			else
	//			{
	//				mr[r] = mr[r - 1];
	//			}
	//			ml[r] = ml[r - 1];
	//			mu[r] = mu[r - 1];
	//			md[r] = md[r - 1];
	//		}
	//		if (s[r - 1] == 'U')
	//		{
	//			if (md[r - 1] > 0)
	//			{
	//				md[r] = md[r - 1] - 1;
	//				curadd++;
	//				start = true;
	//			}
	//			else
	//			{
	//				md[r] = md[r - 1];
	//			}
	//			mr[r] = mr[r - 1];
	//			mu[r] = mu[r - 1];
	//			ml[r] = ml[r - 1];
	//		}
	//		if (start)
	//		{
	//			curcnt++;
	//		}
	//		if (curadd == all)
	//		{
	//			ans = min(ans, curcnt);
	//			curadd = (ml[l+1] - ml[r]);
	//			curadd += (mr[l+1] - mr[r]);
	//			curadd += (mu[l+1] - mu[r]);
	//			curadd += (md[l+1] - md[r]);
	//			ml[r] -= (ml[l + 1] - ml[r]);
	//			mr[r] -= (mr[l + 1] - mr[r]);
	//			mu[r] -= (mu[l + 1] - mu[r]);
	//			md[r] -= (md[l + 1] - md[r]);
	//			l++;
	//			start = false;
	//		}
	//		r++;
	//		if (r > (n)) //
	//		{
	//			break;
	//		}
	//	}
	//}
	//else
	//{

	//}
	//

	//cout << ans;


	return 0;
}