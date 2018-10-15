#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <climits>
#include <sstream>
#include <map>
#include <unordered_map>
#include <cctype>
#define oo INT_MAX
#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define ll long long
#define inf (int)1e9
#define forl(i, k, p) for (int i = k; i <= p; i++)
#define loop(i, p) for (int i = 0; i < p; i++)
#define sf(a)           scanf("%d",&a)
#define sfl(a)          scanf("%lld",&a)
#define sff(a,b)        scanf("%d %d",&a,&b)
#define sffl(a,b)       scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)     scanf("%d %d %d",&a,&b,&c)
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	int arr[101];
	int mx = -oo;
	loop(i, n) {
		cin >> arr[i];
		mx = max(mx, arr[i]);
	}
	int sum = 0;
	loop(i, n) {
		sum += mx - arr[i];
	}

	if (m <= sum) {
		cout << mx << ' ' << mx + m << endl;
	}
	else {
		m -= sum;
		cout << mx + m / n + ((m % n) > 0) << ' ' << mx + m + sum << endl;
	}
}
