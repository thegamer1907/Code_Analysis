#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <fstream>
#include <utility>
#include <algorithm>
#include <vector>
#include <map>
#include <exception>

using namespace std;

#define endl "\n"
#define FOR(i, n) for (int i=0; i<n; ++i)
#define REP(i, m, n) for (int i=m; i<n; ++i)
#define mp make_pair
#define add push_back
typedef long long ll;
#define to_int stoi
// ll: up to 9 * 10**18

string alph = "abcdefghijklmnopqrstuvwxyz";
string ALPH = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
double pi = 3.1415926535;
double e = 2.7182818284;

// BEGIN CODE

int n; ll S;
ll a[100000], b[100000];

ll works(int k)
{
	FOR(i, n)
		b[i] = a[i] + (i+1)*k;
	sort(b, b+n);

	ll sum=0;
	FOR(i, k)
		sum += b[i];
	if (sum <= S)
		return sum;
	else return -1;
}

int main()
{
	ios::sync_with_stdio(false);
	cin>>n>>S;
	FOR(i, n) { cin>>a[i]; b[i]=0; }

	int l = 0, h = n;
	while (h-l>1)
	{
		int m = (l+h)/2;
		if (works(m) > -1)
			l = m;
		else h = m;
	}
	if (works(h) > -1)
		cout << h << " " << works(h);
	else
		cout << l << " " << works(l);
}
