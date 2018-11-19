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

int n, k;
vector<string> a;
set<string> fft;

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
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		string sfd = "";
		for (int j = 0; j < k; ++j)
		{
			char ft;
			cin >> ft;
			sfd += ft;
		}
		fft.insert(sfd);
	}
	for (auto it = fft.begin(); it != fft.end(); ++it)
	{
		a.pb(*it);
	}

	for (int i = 0; i < sz(a); ++i)
	{
		int sum = 0;
		for (int j = 0; j < k; ++j)
		{
			sum += (a[i][j] - '0');
		}
		if (sum == 0)
		{
			cout << "YES";
			return;
		}
	}
	for (int i = 0; i < sz(a)-1; ++i)
	{
		vector<int> ans(k, 0);
		for (int h = 0; h < k; ++h)
		{
			ans[h] = (a[i][h] - '0');
		}
		for (int j = i + 1; j < sz(a); ++j)
		{
			bool flag = true;
			vector<int> ans1(k, 0);
			for (int h = 0; h < k; ++h)
			{
				ans1[h] = (a[j][h] - '0');
			}
			vi ans2(k, 0);
			for (int h = 0; h < k; ++h)
			{
				ans2[h] = ans1[h] + ans[h];
			}
			for (int h = 0; h < k; ++h)
			{
				if (ans2[h] > 1)
				{
					flag = false;
				}
			}
			if (flag)
			{
				cout << "YES";
				return;
			}
		}
	}
	cout << "NO";
}