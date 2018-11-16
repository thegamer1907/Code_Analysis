#include <cstdio>
#include <iostream>
#include <cstring>
#include <numeric>
#include <cstdlib>
#include <algorithm>
#include <list>
#include <set>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <fstream>

using namespace std;

#define fi first
#define se second
#define pb push_back
#define rep(i,l,r) for(int i=(l), _##i=(r); i<=_##i; ++i)
#define dwn(i,r,l) for(int i=(r), _##i=(l); i>=_##i; --i)

#define s(n) scanf("%d",&n)
#define sc(n) scanf("%c",&n)
#define ss(n) scanf("%s",n)

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<double, pii> pdii;
typedef pair<ll, ll> pll;

const int N = 1e5 + 7;
char str[N];
int n, l, r, dp[N];

int main() {
    ss(str + 1);
    str[0] = 'x';
    n = strlen(str + 1);
    rep (i, 1, n - 1) {
        dp[i] = dp[i - 1] + (str[i] == str[i + 1]);
    }
    int t;
    s(t);
    rep (i, 1, t) {
        s(l); s(r);
        printf("%d\n", dp[r - 1] - dp[l - 1]);
    }
}