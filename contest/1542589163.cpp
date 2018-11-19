#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <iomanip>
#include <cctype>
#include <cassert>
#include <bitset>
#include <ctime>

using namespace std;

#define pau system("pause")
#define ll long long
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define clr(a, x) memset(a, x, sizeof(a))

const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

int h, m, s, t1, t2;
int main() {
    cin >> h >> m >> s >> t1 >> t2;
    if (t1 > t2) swap(t1, t2);
    int cnt = 0;
    if (h >= t1 && h < t2) ++cnt;
    if (m >= t1 * 5 && m < t2 * 5) ++cnt;
    if (s > t1 * 5 && s < t2 * 5) ++cnt;
    puts(cnt == 0 || cnt == 3 ? "YES" : "NO");
    return 0;
}
