#include <bits/stdc++.h>
using namespace std;
#define in freopen("input.txt","r",stdin);
#define out freopen("output.txt","w",stdout);
#define ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);//////////
#define sz(v) ((long long)((v).size()))
#define all(v) ((v).begin()),((v).end())
#define allr(v) ((v).rbegin()),((v).rend())
#define clr(v, d) memset((v), (long long)(d), sizeof(v))
#define MP make_pair
#define s  second
#define f  first
#define endl "\n"
#define LL long long
#define LD long double

const int OO = (int) 1e9;

int dx[8] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[8] = { 1, -1, 0, 0, 1, -1, 1, -1 };

long long n, t, ans, sum;
vector<LL> a;

int main() {
	//ios;
	cin >> n >> t;
	a.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	LL i = 0, j = 0;

	while (i < n && j < n) {
		if (sum + a[j] <= t) {
			sum += a[j];
			ans = max(ans, (j - i + 1));
			j++;
		} else {
			sum -= a[i];
			i++;
		}
	}
	cout << ans << endl;

	return 0;
}
