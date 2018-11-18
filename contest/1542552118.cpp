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

const int MR = 1e5 + 10;
const LL inf = 1e18;

LL dp[21][MR];
int A[21][MR];

int a[MR];

// zapamietaj ile razy wystepuje liczba na danym przedziale, jego poczatek i koniec
int freq[MR], gp, gk;
// koszt tego przedzialu
LL cost;

LL ile(int b, int e)
{
	// popraw cost, tak zeby odpowiadal kosztowi przedzialu [b,e)
	while (gp > b)
	{
		cost += freq[a[gp-1]];
		freq[a[gp - 1]]++;
		gp--;
	}
	while (gp < b)
	{
		freq[a[gp]]--;
		cost -= freq[a[gp]];
		gp++;
	}

	while (gk > e)
	{
		freq[a[gk - 1]]--;
		cost -= freq[a[gk - 1]];
		gk--;
	}
	while (gk < e)
	{
		cost += freq[a[gk]];
		freq[a[gk]]++;
		gk++;
	}

	return cost;
}

void compute(int k, int l, int r, int Al, int Ar)
{
	// l - poczatek przedzialu
	// r - jeden za koncem wyliczania
	// Al - poczatek przedzialu, ktory moze dac optimum
	// Ar - koniec pzedzialu, ktory moze dac optimum
	// M - mapa wejsciowa, do wyliczania wartosci

	if (l >= r)
		return;

	assert(Al <= Ar);

	int m = (l + r) / 2;
	// wylicz dp[k][m] na pale
	dp[k][m] = inf;
	// wylicz koszt poczatkowy na przedziale Al..m - nie do konca na pale, tez sie zamortyzuje do O(nlgn)

	FOR(i, max(Al, A[k - 1][m]), min(Ar + 1, m))
	{
		LL cnt = ile(i + 1, m + 1);
		if (dp[k][m] > dp[k - 1][i] + cnt)
		{
			dp[k][m] = dp[k - 1][i] + cnt;
			A[k][m] = i;
		}
	}

	compute(k, l, m, Al, A[k][m]);
	compute(k, m + 1, r, A[k][m], Ar);
}

int main()
{
	int n, k;
	scanf("%d%d", &n, &k);

	FORQ(i, 1, n)
		scanf("%d", &a[i]);

	// wylicz wartosc dla 1 odcinka
	gp = 1; gk = 1;
	FORQ(i, 1, n)
	{
		dp[1][i] = ile(1, i + 1);
		A[1][i] = 0;
	}

	// wylicz dla kolejnych
	FORQ(i, 2, k)
		compute(i, i, n + 1, i - 1, n);

	cout << dp[k][n] << endl;

	return 0;
}