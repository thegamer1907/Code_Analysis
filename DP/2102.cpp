#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3FLL
#define watch(x) clog << #x << " is " << x << endl
#define _ << ' ' <<
#define all(x) (x).begin(), (x).end()
#define sz(x) int((x).size())
#define st first
#define nd second
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const int N = 200050;
int dp[N], v[N], cnt[N];

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    for (int i = 0; i < n; ++i)
        scanf("%d", &v[i]);
    for (int i = n-1; i >= 0; --i) {
        dp[i] = dp[i+1];
        if (++cnt[v[i]] == 1) dp[i]++;
    }
    for (int i = 0, x; i < q; ++i) {
        scanf("%d", &x);
        printf("%d\n", dp[x-1]);
    }
    return 0;
}
