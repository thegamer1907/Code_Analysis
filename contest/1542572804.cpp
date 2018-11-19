#pragma comment(linker, "/STACK:256000000")

#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <memory.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <utility>
#include <algorithm>
#include <random>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#define pi (3.1415926535897932384626433832795)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define tmin(x,y,d) (min(min((x),(y)),(d)))
#define tmax(x,y,d) (max(max((x),(y)),(d)))
#define sq(x) ((x)*(x))
#define cube(x) (((x)*(x))*(x))
#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()

#define MOD 1000000007
#define MAX 100007
#define INF 1000000228
#define LINF 5000000000000000228
#define EPS 0.00000000001

typedef long double ld;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

//#define task "veryhard"

int t;
void solve();

int n;
string s;
vector<string> kt;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);

#ifdef _MY_DEBUG
	freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#else
	//	freopen(task".in", "r", stdin); freopen(task".out", "w", stdout);
#endif

	t = 1;
	//scanf("%d", &t);
	for (int i = 0; i < t; ++i)
	{
		solve();
	}
}

void solve()
{
	cin >> s;
	cin >> n;
	kt.resize(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> kt[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (kt[i] == s)
		{
			cout << "YES";
			return;
		}
	}
	vector<int> j;
	for (int i = 0; i < n; ++i)
	{
		if (kt[i][1] == s[0])
		{
			j.pb(i);
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (sz(j) && kt[i][0] == s[1])
		{
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}