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

int ile[1 << 5];

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);
	REP(i, n)
	{
		int mask = 0;
		REP(j, k)
		{
			int b;
			scanf("%d", &b);
			mask += (b << j);
		}
		ile[mask]++;
	}

	if (ile[0])
	{
		printf("YES\n");
		return 0;
	}

	REP(mask1,1<<k)REP(mask2,1<<k)
		if (!(mask1&mask2) && ile[mask1] && ile[mask2])
		{
			printf("YES\n");
			return 0;
		}

	printf("NO\n");

	return 0;
}