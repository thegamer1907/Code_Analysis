#include <iostream>
#include <istream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <queue>
#include <stack>
#include <list>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vi lnum;
typedef long double ld;

#define ALL(V) V.begin(), V.end()
#define SZ(V) (int)V.size()
#define pb push_back
#define mp make_pair
#define pi 3.14159265358979
#define fopen freopen("input.txt", "r", stdin); freopen("output.txt","w", stdout)
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define FORR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define REP(i, N) FOR(i, 0, N)
#define REPR(i, N) RFOR(i, N, 0)
#define FILL(A,value) memset(A,value,sizeof(A))
#define f first
#define s second

const int MOD9 = 1e9+7;
const int MOD91 = 1e9+9;
const ll MOD12 = 1e12+39LL;
const ll MOD15 = 1e15+37LL;
const int INF = 1e9;
const int base = 1e9;
const int MAX = 2e5;
const ld EPS = 1e-10;

int n,k;

int S;
int a[200000];

ll cnt(int x)
{
	ll b[200000];
	FOR(i,0,n)
	{
		b[i] = 1LL*(i+1)*x+a[i];
	}
	sort(b,b+n);
	ll res = 0;
	FOR(i,0,x)
	{
		res+=b[i];
	}
	return res;
}

int main() {
	scanf("%d %d", &n, &S);
	FOR(i,0,n)
	{
		scanf("%d", &a[i]);
	}
	int l = 0;
	int r = n;
	while (l<r)
	{
		int m = (l+r)/2+1;
		if (cnt(m)>S)
		{
			r = m-1;
		}
		else
		{
			l = m;
		}
	}
	cout << l << ' ' << cnt(l);

	return 0;
}
