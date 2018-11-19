#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <cmath>
#include <cctype>
#include <ctime>
#include <bitset>

using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)
#define eps 1e-9

typedef long long ll;
typedef pair<int, int> pii;

const int INF = 0x7fffffff;
const int maxn = 10;
char s[maxn], s_t[maxn];
int n;
bool flag1 = false, flag2 = false;

int main() {
#ifdef __AiR_H
    freopen("A.in", "r", stdin);
//    freopen("out.txt", "w", stdout);
#endif // __AiR_H
    scanf("%s %d", s, &n);
    while (n--) {
        scanf("%s", s_t);
        if (s_t[0] == s[0] && s_t[1] == s[1]) {
            flag1 = flag2 = true;
        }
        if (s_t[0] == s[1]) { flag1 = true; }
        if (s_t[1] == s[0]) { flag2 = true; }
    }
    if (flag1 && flag2) { printf("YES\n"); }
    else { printf("NO\n"); }
#ifdef __AiR_H
    printf("Time used = %.2fs\n", (double)clock() / CLOCKS_PER_SEC);
#endif // __AiR_H
    return 0;
}
