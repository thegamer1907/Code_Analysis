#include <iostream>
#include <istream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
//#include <unordered_map>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <queue>
#include <stack>
#include <list>
#include <sstream>
//#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef long double ld;

#define ALL(V) V.begin(), V.end()
#define SZ(V) (int)V.size()
#define pb push_back
#define mp make_pair
#define f first
#define s second

#define fopen freopen("substrcmp.in", "r", stdin); freopen("substrcmp.out","w", stdout)
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define FORR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define FILL(A,value) memset(A,value,sizeof(A))
#define IOSFAST ios::sync_with_stdio(false); cin.tie(0)

const ll MOD = 1000LL * 1000 * 1000 + 7;
const int INF = 1e9;
const int BASE = 1e9;
const int MAX = 200002;
const double EPS = 1e-9;
const double PI = acos(-1.);

int n;
int k;
int a[300002];
int pref[300002];

int suma(int l, int r)
{
	return pref[r] - (l != 0 ? pref[l-1] : 0);
}

bool good(int x)
{
	if (!x)
		return true;
	FOR(i,0,n)
	{
		if (suma(i,min(i+x-1,n-1))+k>=x)
			return true;
	}
	return false;
}

int main()
{
	scanf("%d %d", &n, &k);
	FOR(i,0,n)
	{
		scanf("%d", &a[i]);
		if (i)
		{
			pref[i] = pref[i-1];
		}
		pref[i] += a[i];
	}
	int l = 0;
	int r = n;
	while (abs(l-r)>1)
	{
		int m = (l+r)/2;
		if (good(m))
		{
			l = m;
		} else
		{
			r = m-1;
		}
	}

	if (r<l)
		swap(l,r);
	if (good(r))
	{
		cout << r << endl;
		FOR(i,0,n)
		{
			if (suma(i,min(i+r-1,n-1))+k>=r)
			{
				FOR(j,i,i+r)
				{
					a[j] = 1;
				}
				FOR(i,0,n)
				{
					cout << a[i] << ' ';
				}
				return 0;
			}
		}
	}
	r = l;
	if (good(r) && r)
	{
		cout << r << endl;
		FOR(i,0,n)
		{
			if (suma(i,min(i+r-1,n-1))+k>=r)
			{
				FOR(j,i,i+r)
				{
					a[j] = 1;
				}
				FOR(i,0,n)
				{
					cout << a[i] << ' ';
				}
				return 0;
			}
		}
	}
	cout << 0 << endl;
	FOR(i,0,n)
	{
		cout << a[i] << ' ';
	}

	return 0;
}

