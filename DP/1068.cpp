#include <iostream>
#include <algorithm>
#include <math.h>
#include <cstdio>
#include <stdio.h>
#include <iomanip>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <deque>
#include <queue>
#include <list>
#include <cctype>
#include <climits>
#include <ctime>

using namespace std;

#define PI 3.14159265358979323846
#define eps 1e-7
#define ACCEPTED return 0;
#define PAUSE system("pause");
#define all(x) x.begin(),x.end()
#define sqr(x) ((x)*(x))
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<pii> vpii;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	//ios_base::sync_with_stdio(false);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,ans=INT32_MIN;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++)cin >> a[i];
	for (int l = 0; l < n; l++) {
		for (int r = l; r < n; r++) {
			int c = 0;
			for (int k = 0; k < n; k++) {
				if (k >= l && k <= r)c += 1 - a[k];
				else c += a[k];
			}
			ans = max(ans, c);
		}
	}
	cout << ans;
	ACCEPTED
}
