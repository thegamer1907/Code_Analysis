#include <stdio.h>
#include <stack>
#include <map>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <vector>
#include <set>
#include <queue>
#include <climits>
#include <unordered_map>
#include <iterator> 
using namespace std;
#define ll long long
#define ull unsigned long long
#define ui unsigned int
#define mp make_pair
#define inf32 INT_MAX
#define inf64 LLONG_MAX
#define PI acos(-1)
#define cos45 cos(PI/4)
#define ld long double
#define inf 1000000
#define pii pair<int, int>
#define pll pair<ll, ll>
const int mod = (1e9) + 7;
const double eps = 1e-6;
const int siz = 1e6 + 5, siz2 = 1049659, siz3 = 5032108;
int co[26], ans;
int main()
{
	char cur;
	while (scanf("%c", &cur)) {
		if (cur == '\n') {
			break;
		}
		if (cur < 'a' || cur > 'z') {
			continue;
		}
		co[cur - 'a']++;
		if (co[cur - 'a'] == 1) {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}