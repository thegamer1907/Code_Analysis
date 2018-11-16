#include <bits/stdc++.h>

#define fto(i, x, y) for(int i = (x); i <= (y); ++i)
#define fdto(i, x, y) for(int i = (x); i >= (y); --i)
#define ftoa(i, x, y, a) for(int i = (x); i <= (y); i += a)
#define ftoit(it, var) for (__typeof(var.begin()) it = var.begin(); it != var.end(); ++it)

#define ii pair<int, int>
#define mp make_pair
#define ff first
#define ss second

#define vi vector<int>
#define vii vector<ii>
#define ll long long
#define vll vector<ll>

#define eb emplace_back
#define ef emplace_front
#define lb lower_bound
#define ub upper_bound

#define oo 1000000007
#define OO 1000000000000000007LL

using namespace std;

#define Pro "tmp"
#define maxN 300007

int a[maxN], f[maxN];

int main() {
    #ifndef ONLINE_JUDGE
        freopen(Pro".inp", "r", stdin);
        freopen(Pro".out", "w", stdout);
    #endif // ONLINE_JUDGE

    int n;
    scanf("%d", &n);

    fto(i, 1, n) scanf("%d", &a[i]);
    sort(a+1, a+n+1);

    int res = 0, ans = 0;
    int cur = a[1];

    fto(i, 1, n) {
        if (2*cur >= a[i]) {
            cur = a[i];
            ++res;
        }
        else cur = a[i], res = 1;
        ans = max(ans, res);
    }

    printf("%d\n", ans);
    return 0;
}
