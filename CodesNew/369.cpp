#include <bits/stdc++.h>

#define rep(i, a, b) for ((i)=(a); (i) < (b); (i)++)
#define reps(i, a, b, s) for ((i)=(a); (i) < (b); (i)+=(s))
#define repe(i, a, b) for ((i)=(a); (i) <= (b); (i)++)
#define mod(n, M) ((((n) % (M)) + (M)) % (M))
#define pb push_back
#define MP make_pair
#define ff first
#define ss second
#define PI acos(-1)
#define prnt(arr) for (auto i : (arr)) cout << i << " "; cout << endl;
#define eps 1e-11
#define len(x) x.size()
#define FIN freopen("input.txt", "r", stdin);
#define FOUT freopen("output.txt", "w", stdout);
#define nl "\n"
#define all(x) x.begin(), (x).end()
#define FASTIO ios::sync_with_stdio(0); cin.tie(0);
#define READINT(x) scanf("%d", &(x))

using namespace std;

typedef long long ll;
typedef unsigned long ul;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

//double max = numeric_limits<double>::max();
//double INF = numeric_limits<double>::infinity();

ll arr[100005];

int main() {
    FASTIO

    ll n, t;
    cin >> n >> t;

    ll i;
    repe(i, 1, n) cin >> arr[i];

    ll l = 1, r = 1, mx = 0;
    ll sum = 0;

    while (r <= n) {
        if (arr[r] + sum <= t) {
            mx = max(mx, r-l+1);
            sum += arr[r];
            ++r;
        } else {
            sum -= arr[l];
            ++l;
        }
    }

    cout << mx << endl;

    return 0;
}
