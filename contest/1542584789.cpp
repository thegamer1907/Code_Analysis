#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include <map>
#include <vector>
#include <list>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>
#include <queue>
#include <bitset>		//UWAGA - w czasie kompilacji musi byc znany rozmiar wektora - nie mozna go zmienic
#include <cassert>
#include <iomanip>		//do setprecision
#include <ctime>
#include <complex>
using namespace std;

#define FOR(i,b,e) for(int i=(b);i<(e);++i)
#define FORQ(i,b,e) for(int i=(b);i<=(e);++i)
#define FORD(i,b,e) for(int i=(b)-1;i>=(e);--i)
#define REP(x, n) for(int x = 0; x < (n); ++x)
#define ALL(u) (u).begin(),(u).end()

#define ST first
#define ND second
#define PB push_back
#define MP make_pair
#define LL long long
#define ULL unsigned LL
#define LD long double

typedef pair<int, int> PII;

const double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342;

vector<int> get(int h, int m, int s)
{
	vector<int> res;

	res.push_back(h * 3600 + m * 60 + s);
	// minuty robia skok o dl 12
	res.push_back(12*(m * 60 + s));
	// sekundy robia skok o dl 720
	res.push_back(720 * s);

	return res;
}

int main()
{
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);

	h %= 12;

	auto v = get(h, m, s);
	h = v[0];
	m = v[1];
	s = v[2];

	t1 %= 12; t1 *= 3600;
	t2 %= 12; t2 *= 3600;

	if (t1 < t2)
		swap(t1, t2);

	// t1 > t2
	if (h <= t1 && h >= t2 && m <= t1 && m >= t2 && s <= t1 && s >= t2)
	{
		printf("YES\n");
		return 0;
	}

	if ((h >= t1 || h <= t2) && (m >= t1 || m <= t2) && (s >= t1 || s <= t2))
	{
		printf("YES\n");
		return 0;
	}

	printf("NO\n");

	return 0;
}