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

int n, k;
set<int> ss;
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        int x, res = 0;
        for (int i = 1; i <= k; ++i) {
            scanf("%d", &x);
            res = 2 * res + x;
        }
        ss.insert(res);
    }
    vector<int> vec;
    for (set<int>::iterator it = ss.begin(); it != ss.end(); ++it) {
        vec.pb(*it);
    }
    int flag = 0;
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if (!(vec[i] & vec[j])) flag = 1;
        }
    }
    if (vec.size() == 1 && vec[0] == 0) flag = 1;
    puts(flag ? "YES" : "NO");
    return 0;
}
