#include <algorithm>
#include <iostream>
#include <iterator>
#include <iomanip>
#include <vector>
#include <cmath>
#include <queue>
#include <map>
#include <set>

using namespace std;

#define rfile freopen("input.txt", "r", stdin)
#define wfile freopen("output.txt", "w", stdout)
#define files rfile; wfile
#define firstout if (first == true) first = false; else printf(" ")

typedef long long ll;
typedef long double ld;
typedef vector< int > vi;
typedef vector< vi > vvi;
typedef map< ll, ll > mapT;
typedef pair< int, int > pairT;

int main()
{
    ll ans = 0;
    int n, k;
    scanf("%d %d", &n, &k);
    mapT l, r;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        r[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        r[a[i]]--;
        if (a[i] % k == 0)
            ans += (ll)l[a[i] / (ll)k] * (ll)r[a[i] * (ll)k];
        l[a[i]]++;
    }
    printf("%lld", ans);
    return 0;
}
