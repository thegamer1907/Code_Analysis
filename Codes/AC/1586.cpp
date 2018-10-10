#pragma comment(linker, "/STACK:64000000")
#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cassert>
#include <ctime>
#include <sstream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define ll long long
#define pii pair < int, int >
#define pll pair < long long, long long>
#define ull unsigned long long
#define y1 stupid_cmath
#define left stupid_left
#define right stupid_right
#define vi vector <int>
#define sz(a) (int)a.size()
#define forit(it, s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it++)
#define all(a) a.begin(), a.end()
#define sqr(x) ((x) * (x))

const int inf = (int)1e9;
const int mod = inf + 7;
const double eps = 1e-9;
const double pi = acos(-1.0);

int n, S, a[100100];

ll get(int k) {
    priority_queue<ll> q;
    for (int i = 1; i <= n; i++) {
        ll cost = a[i] + i * 1ll * k;
        q.push(-cost);
    }
    ll ans = 0;
    int cnt = 0;
    while (cnt < k) {
        cnt++;
        ll val = q.top(); q.pop();
        val = -val;
        ans += val;
    }
    return ans;
}

int main(){

    scanf("%d%d", &n, &S);
    for (int i = 1; i <= n; i++) scanf("%d", a + i);

    int l = 1, r = n;
    int k = 0;
    while (l <= r) {
        int mid = (l + r) >> 1;
        ll cost = get(mid);
        if (cost <= S) {
            k = mid;
            l = mid + 1;
        } else r = mid - 1;
    }

    printf("%d %lld\n", k, get(k));

    return 0;
}
