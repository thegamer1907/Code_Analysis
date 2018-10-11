#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <vector>
#include <map>
#include <unordered_map>
#include <iomanip>
#include <stack>
#include <bitset>

using namespace std;
double const EPS = 1e-6;

typedef long long ll;
#define int ll
int const N = 1e5 + 50;
int a[N];
signed main()
{
	ios::sync_with_stdio(0);
	int n, t; 
	cin >> n >> t; 
	for (int i = 0; i < n; i++) cin >> a[i];
	int ans = 0;
	int i, j;
	i = j = 0;
	int time_spent = 0;
	while (j<n) {
		time_spent += a[j];
		while (time_spent > t) {
			time_spent -= a[i++];
		}
		ans = max(ans, j - i + 1);
		j++;
	}

	cout << ans;
	return 0;
}
//azanjvhsuiovhruionhurvnhurhvneugvipr