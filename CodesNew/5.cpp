/**
 *      author : azhar556
 *      12 September 2018   2:45 AM (+7)
**/

#include <bits/stdc++.h>
#define PI 3.14159265
#define rep(a,b,c) for(int a=b; a<c; a++)
#define pb(a) push_back(a)
#define all(a) a.begin(), a.end()

using namespace std;

typedef double db;
typedef long long i64;

const long long MAX = 1e9 + 1;

void solve() {
	int n;
	i64 l;
	cin >> n >> l;
	vector<int> arr(n);
	for (int a = 0; a < n; a++) {
		cin >> arr[a];
	}
	sort(all(arr));
	i64 Max;
	if (n == 1) Max = arr[0] * 2;
	for (int a = 1; a < n; a++) {
		i64 val = abs(arr[a - 1] - arr[a]); cerr << val << ' ';
		if (a == 1) Max = val;
		Max = max(Max, val);
	} //cerr << Max;
	
	long double res = 1.0 * Max / 2; //cerr << res;
	if ((1.0 * arr[0]) > res) res = 1.0 * arr[0]; //cerr << arr[0];
	if ((1.0 * (l - arr[n - 1])) > res) res = 1.0 * (l - arr[n - 1]);
	 cout << setprecision(10) << fixed << res;
	// printf("%f", res);
}

int main()
{
	solve();
	
	cerr << endl << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
	return 0;
}