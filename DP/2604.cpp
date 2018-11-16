#include <bits/stdc++.h>

using namespace std;

typedef int64_t ll;
typedef uint64_t ull;
typedef long double ld;
typedef __float128 lld;

const ll mod = 1'000'000'007;
const ld pi = acosl (-1.0L);

#define fori(n) for (int i = 0; i < n; i++)
#define forj(n) for (int j = 0; j < n; j++)
//|||||-|||||-|||||-|
int main ()
{
#ifdef OFFLINE_JUDGE
    freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
#else
    //freopen ("beasts.in", "r", stdin);
    //freopen ("beasts.out", "w", stdout);
#endif
    cin.sync_with_stdio (false);
    cout.sync_with_stdio (false);
    cin.tie (0);
    
    int n; cin >> n;
    int ans = 0;
    int last = -1;
    int len = 0;
    fori (n) {
        int num; cin >> num;
        if (num > last)
            len++;
        else len = 1;
        last = num;
        ans = max (ans, len);
    }
    cout << ans;
    
    return 0;
}
