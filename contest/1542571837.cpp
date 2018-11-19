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
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define clr(a, x) memset(a, x, sizeof(a))
#define all(x) x.begin(), x.end()

const double pi = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;

int n, m;
string s[205];
set<int> ss[205][20];
int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        cin >> s[i];
        int l = s[i].length();
        for (int j = 0; j < l; ++j) {
            int tx = 0;
            for (int k = 1; j + k - 1 < l && k <= 14; ++k) {
                tx = 2 * tx + s[i][j + k - 1] - '0';
                ss[i][k].insert(tx);
            }
        }
    }
    scanf("%d", &m);
    for (int i = 1; i <= m; ++i) {
        int a, b;
        scanf("%d%d", &a, &b);
        for (int j = 1; j <= 14; ++j) {
            set_union(all(ss[a][j]), all(ss[b][j]), \
                      inserter(ss[n + i][j], ss[n + i][j].begin()));
            //cout << j << ' ' << ss[n + m][1].size() << endl;
        }
        //cout << ' ' << ss[n + m][1].size() << endl;
        int la = s[a].length(), lb = s[b].length();
        int ja = max(0, la - 14), jb = min(14, lb);
        for (int j = ja; j < la; ++j) s[n + i] += s[a][j];
        for (int j = 0; j < jb; ++j) s[n + i] += s[b][j];
        int ll = s[n + i].length();
        for (int j = 0; j < ll; ++j) {
            int tx = 0;
            for (int k = 1; j + k - 1 < ll && k <= 14; ++k) {
                tx = 2 * tx + s[n + i][j + k - 1] - '0';
                ss[n + i][k].insert(tx);
            }
        }
        //cout << ' ' << ss[n + m][1].size() << endl;
        string ts = "";
        for (int j = 0; j < ja && j < 14; ++j) ts += s[a][j];
        s[n + i] = ts + s[n + i];
        for (int j = max(jb, lb - 14); j < lb; ++j) s[n + i] += s[b][j];
        int ans = 0;
        for (int r = 1; r <= 14; ++r) {
            if (ss[n + i][r].size() == (1 << r)) ans = r;
        }
        //cout << s[n + i] << endl;
        printf("%d\n", ans);
    }
    /*for (int i = 1; i <= n + m; ++i) {
        for (int l = 1; l <= 14; ++l) cout << ss[i][l].size() << ' ';
        cout << endl;
    }*/
    return 0;
}
