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

int n, m, a[200015], x;
string s[105], t;
int main() {
    cin >> t >> n;
    for (int i = 1; i <= n; ++i) cin >> s[i];
    int flag = 0;
    for (int i = 1; i <= n; ++i) {
        if (s[i] == t) flag = 1;
    }
    int flag1 = 0, flag2 = 0;
    for (int i = 1; i <= n; ++i) {
        if (s[i][0] == t[1]) flag1 = 1;
        if (s[i][1] == t[0]) flag2 = 1;
    }
    if (flag1 & flag2) flag = 1;
    puts(flag ? "YES" : "NO");
    return 0;
}
