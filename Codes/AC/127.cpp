#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <functional>
#include <iomanip>
#include <ios>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <unistd.h>
#include <utility>
#include <vector>
#define dbc(x) cerr << x << '\n'
#define dbn(x) cerr << #x << " == " << x << '\n'
#define pb push_back
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

//
const int MAXN = 112345;
int v[MAXN];
int ac[MAXN];

int main(){
	ios::sync_with_stdio(false), cin.tie(0);

	int n; cin >> n;

	for (int i=1; i<=n; i++) {
		cin >> v[i];
		ac[i] = ac[i-1] + v[i];
	}

	int m; cin >> m;

	for (int i=0; i<m; i++) {
		int q; cin >> q;

		int l = 1;
		int r = n;

		int ans = -1;


		while (l <= r) {
			int mid = (l + r)/2;

			if (ac[mid] >= q) {
				r = mid - 1;
				ans = mid;
			} else {
				l = mid + 1;
			}
		}

		cout << ans << endl;
	}
}