#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <sstream>
#include <stdio.h>
#include <set>
#include <stack>
#include <map>
#include <utility>
#include <numeric>
#include <queue>
using namespace std;

#define all(v) (v).begin(),(v).end()
#define allr(v) (v).rbegin(),(v).rend()
#define sz(a) int((a).size())
#define pb push_back
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end();i++)
#define mem(a, b) memset(a, b, sizeof(a))
#define MP make_pair
#define EPS      1e-9
#define F        first
#define S        second
#define sc(x)	 scanf("%d",&x)
#define scl(x)	 scanf("%lld",&x)
#define sq(x)	 (x)*(x)
#define INF (1000000000)
#define oo (1ll<<60)
#define PI acos(-1)
#define POW(x) ((x)*(x))
#define MOD ((int)1e9+7)
typedef stringstream ss;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<ll> row;
typedef vector<row> matrix;

const int dx[] = { 0, 0, -1, 1, 1, -1, -1, 1 };
const int dy[] = { -1, 1, 0, 0, -1, 1, -1, 1 };

int n, s;
int arr[(int) 1e5 + 5];
ll arr2[(int) 1e5 + 5];

bool check(int k) {
	for (int i = 0; i < n; ++i)
		arr2[i] = 1ll * (i + 1) * k + arr[i];
	sort(arr2, arr2 + n);
	ll sum = 0;
	for (int i = 0; i < k; ++i)
		sum += arr2[i];
	return sum <= s;
}
ll getanswer(int k) {
	for (int i = 0; i < n; ++i)
		arr2[i] = 1ll * (i + 1) * k + arr[i];
	sort(arr2, arr2 + n);
	ll sum = 0;
	for (int i = 0; i < k; ++i)
		sum += arr2[i];
	return sum;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	scanf("%d%d", &n, &s);
	for (int i = 0; i < n; ++i)
		sc(arr[i]);
	int l = 0, r = n;
	while (l < r) {
		int mid = l + (r - l + 1) / 2;
		if (check(mid))
			l = mid;
		else
			r = mid - 1;
	}

	printf("%d %I64d\n", l, getanswer(l));
	return 0;
}
