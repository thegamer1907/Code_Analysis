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

int a[maxN], b[maxN];

int main() {
    #ifndef ONLINE_JUDGE
        freopen(Pro".inp", "r", stdin);
        freopen(Pro".out", "w", stdout);
    #endif // ONLINE_JUDGE

    int n;
    scanf("%d", &n);

    int ans = 0;

    ans += n/100;
    n %= 100;

    ans += n/20;
    n %= 20;

    ans += n/10;
    n %= 10;

    ans += n/5;
    n %= 5;

    ans += n;
    cout << ans << endl;

    return 0;
}
