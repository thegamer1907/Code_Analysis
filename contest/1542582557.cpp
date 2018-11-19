#include<iostream>
#include<queue>
#include<vector>
#include<string>
#include<memory.h>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<set>
#include<cmath>
#include<stdio.h>
#include<map>
#include<stack>
#include<cctype>
#include<sstream>
#include<set>
#include<fstream>
#include<cstring>
#define os(a) memset(a, -1, sizeof a)
#define zeros(a) memset(a, 0, sizeof a)
#define oo 1 << 30
#define noo -1 << 31
#define nloo -1int << 63
#define loo 1int << 62
#define all(a) (a).begin(), (a).end()

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll h, m, s, t1, t2;

int main()
{
	cin >> h >> m >> s >> t1 >> t2;
	ll a, b, c;
	ll clock[3];

	a = (h % 12) * 60 * 60 * 5 + m * 60 * 5 + s * 5;
	b = (m)* 60 * 60 + s * 60;
	c = (s)* 60 * 60;
	clock[0] = a;
	clock[1] = b;
	clock[2] = c;
	sort(clock, clock + 3);
	a = clock[0];
	b = clock[1];
	c = clock[2];
	int d, e;
	d = (t1 % 12) * 60 * 5 * 60;
	e = (t2 % 12) * 60 * 60 * 5;
	//cout << a << " " << b << " " << c << " " << d << " " << e << endl;
	if (d> a && d < b && e > a && e < b)
	{
		cout << "YES" << endl;
		return 0;
	}
	else if (d > b && d < c && e > b && e < c)
	{
		cout << "YES" << endl;
		return 0;
	}
	else
	{
		if (d < a)
		{
			d = d + 60 * 60 * 60;
		}

		if (e < a)
		{
			//cout << a << " " << t2 << endl;
			e = e + 60 * 60 * 60;
		}

		a = a + 60 * 60 * 60;

		if (d > c && d < a && e > c && e < a)
		{
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;
	
}