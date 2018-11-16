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

const int N = 500050;

int main() {
    int n, best = -INF, curr = 0, ans = 0;
    scanf("%d", &n);
    for (int i = 0, x; i < n; ++i) {
        scanf("%d", &x);
        ans += x == 1;
        if (x == 1) x = -1;
        else x = 1;
        curr = max(curr+x, x);
        best = max(best, curr);
    }
    printf("%d\n", ans + best);
    return 0;
}
