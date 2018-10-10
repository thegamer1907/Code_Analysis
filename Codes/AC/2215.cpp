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
#define sc(x)     scanf("%d",&x)
#define scl(x)     scanf("%I64d",&x)
#define sq(x)     (x)*(x)
#define INF (1200000000)
#define oo (1ll<<60)
#define PI acos(-1)
#define POW(x) ((x)*(x))

typedef stringstream ss;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef pair<int, int> ii;
typedef vector<int> rows;
typedef vector<rows> matrix;

const int dx[] = { 0, 0, -1, 1, 1, -1, -1, 1 };
const int dy[] = { -1, 1, 0, 0, -1, 1, -1, 1 };

const int MOD = 1000000007;
const int N = 2e5 + 50;

ll arr[N];
ll arr2[N];
int n;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#endif

	cin >> n;
	for (int i = 1; i <= n; ++i)
		cin >> arr[i], arr[i] += arr[i - 1];
	for(int i=n;i>0;--i)
		arr2[i] += arr2[i+1] +arr[i]-arr[i-1];

	ll ans = 0;

	int l = 1, r = n;
	while (l < r) {
		//cout<<l<<" "<<r<<" "<<arr[l]<<" "<<arr2[r]<<endl;
		if (arr[l] == arr2[r]) {
			ans = max(ans, arr[l]);
			l++;
			continue;
		}
		if (arr[l] > arr2[r])
			r--;
		else
			l++;
	}

	cout<<ans<<endl;
	return 0;

}
