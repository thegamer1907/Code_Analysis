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

const int MR = 110;

struct Str
{
	string p, s;
	set<string> S[MR];
	bool caly;
}t[2 * MR];


int main()
{
	int n;
	cin >> n;
	REP(i, n)
	{
		string s;
		cin >> s;
		t[i].caly = 1;
		t[i].p = t[i].s = s;
		FORQ(dl, 1, min((int)s.length(), 30))REP(b, s.length() - dl + 1)
			t[i].S[dl].insert(s.substr(b, dl));
	}
	int m;
	cin >> m;
	REP(i, m)
	{
		int a, b;
		cin >> a >> b; a--; b--;
		string s = t[a].s + t[b].p;
		if (t[a].caly)
			t[i + n].p = s.substr(0, min(MR - 1, (int)s.length()));
		else
			t[i + n].p = t[a].p;

		if (t[b].caly)
		{
			if (s.length() < MR)
				t[i + n].s = s;
			else
				t[i + n].s = s.substr(s.length() - MR + 1);
		}
		else
			t[i + n].s = t[b].s;

		if (t[a].caly && t[b].caly && t[i + n].p == s && t[i + n].s == s)
			t[i + n].caly = 1;

		FOR(j, 1, 31)
		{
			t[i + n].S[j].insert(t[a].S[j].begin(), t[a].S[j].end());
			t[i + n].S[j].insert(t[b].S[j].begin(), t[b].S[j].end());
		}

		// dodaj nowe stringi z przeciecia
		FORQ(dl, 1, min((int)s.length(), 30))REP(b, s.length() - dl + 1)
			t[i + n].S[dl].insert(s.substr(b, dl));

		int ile = 2, k = 0;
		FOR(j, 1, 30)
		{
			if (t[i + n].S[j].size() == ile)
				k = j;
			ile <<= 1;
		}

		printf("%d\n", k);
	}

	return 0;
}