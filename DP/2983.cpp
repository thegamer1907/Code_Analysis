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

ll a[maxN];

int main() {
    #ifndef ONLINE_JUDGE
        freopen(Pro".inp", "r", stdin);
        freopen(Pro".out", "w", stdout);
    #endif // ONLINE_JUDGE

    int n;
    scanf("%d", &n);

    string a, b;
    cin >> a >> b;

    int ans = 0;
    fto(i, 0, (int)a.size()-1) {
        if (a[i] != b[i] && a[i+1] != b[i+1] && a[i] != a[i+1]) {
            ++ans;
            swap(a[i], a[i+1]);
        }
    }

    fto(i, 0, (int)a.size()-1) ans += a[i] != b[i];
    printf("%d\n", ans);

    return 0;
}
