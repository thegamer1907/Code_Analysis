#define isws std::ios::sync_with_stdio(false)
#define _USE_MATH_DEFINES
#define ll long long int

//#include <bits / stdc++.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <math.h>
#include <bitset>
#include <queue>
#include <functional>
#include <list>
#include <set>
#include <limits.h>
#include <sstream>
#include <map>

using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
typedef vector<int> VI;
typedef pair<int, int> PII;
const ll INF = 1000000007;

const int N = 200000 + 7;

map<ll, ll> ls, rs;
ll arr[N];

int main()
{
	isws;
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	rep(i, 0, n) cin >> arr[i], rs[arr[i]]++;
	ll ans = 0;
	rep(i, 0, n)
	{
		rs[arr[i]]--;
		if (arr[i] % k == 0)
		{
			ans += ls[arr[i] / k] * rs[arr[i] * k];
		}
		ls[arr[i]]++;
	}
	cout << ans << endl;
	return 0;
}