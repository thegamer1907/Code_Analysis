#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <sstream>
#include <stack>
#include <vector>

using namespace std;

typedef long long ll;

const int INF = 2147483647;
const int INF2 = 0x3f3f3f3f;
const ll INF64 = 0x3f3f3f3f3f3f3f3f;
const double PI = 3.14159265358979323846;
const ll MOD = 1e9 + 7;
const ll TARGET = (1LL << 32) - 1LL;

template <typename T>
T Max(T val1, T val2) {
    return val1 > val2 ? val1 : val2;
}

template <typename T, typename... Args>
T Max(T val, Args... arg) {
    T result = Max(arg...);
    return Max(val, result);
}

template <typename T>
inline T read() {
    T X = 0, w = 0;
    char ch = 0;
    while (!isdigit(ch)) {
        w |= ch == '-';
        ch = getchar();
    }
    while (isdigit(ch)) X = (X << 3) + (X << 1) + (ch ^ 48), ch = getchar();
    return w ? -X : X;
}

const int MAXN = 100005;
ll n, m, k;
int w, h;
ll arr[MAXN];

int main() {
#ifdef LOCALLL
    freopen("in", "r", stdin);
    freopen("out", "w", stdout);
#endif
    scanf("%lld %lld %lld", &n, &m, &k);
    for (int i = 0; i < m; i++) {
        arr[i] = read<ll>();
    }
    int maxdel = 0;
    int sum = 0;
    int i = 0;
    while (i < m) {
        int r = ((arr[i] - sum - 1) / k + 1) * k + sum;
        while (arr[i] <= r && i < m) {
            sum++;
            i++;
        }
        maxdel++;
    }
    printf("%d", maxdel);
    return 0;
}