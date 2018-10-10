#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <functional>
#include <queue>
#include <bitset>
#include <sstream>
#include <set>
#include <iomanip>
#include <string.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

//															//AUTHOR: Hugo Garcia
//															//PURPOSE: Competitive programming template

//======================================================================================================================

#define FOR(i, a, b) for(ll i=ll(a); i<ll(b); i++)
//#define pb push_back
#define mp make_pair
#define lld I64d

typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;

//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
int main()
{
	string s;
	cin >> s;
	ll ca = 0, cb = 0, cc = 0;
	FOR(intI, 0, s.length())
	{
		if (s[intI] == 'B') ca++;
		else if (s[intI] == 'S') cb++;
		else cc++;
	}
	ll na, nb, nc, pa, pb, pc;
	cin >> na >> nb >> nc >> pa >> pb >> pc;
	ll intMoney;
	cin >> intMoney;
	ll intH = 5000000000000, intL = 0;
	ll intCost = (ca * pa) + (cb * pb) + (cc * pc);


	while (intL + 1 < intH)
	{
		ll intM = ((intH - intL) >> 1) + intL;

		if (max(0LL, ca * intM - na) * pa +
			max(0LL, cb * intM - nb) * pb +
			max(0LL, cc * intM - nc) * pc > intMoney)
		{
			intH = intM;
		}
		else
		{
			intL = intM;
		}
	}

	cout << intL << endl;
	
	return 0;
}

//======================================================================================================================