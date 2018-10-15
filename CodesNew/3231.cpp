#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define qq cout << "!!" << endl;
#define ww cout << "??" << endl;
#define rr return 0;
#define nl cout << endl;
#define pb push_back
#define mk make_pair
#define sqr(a) ((a) * (a))
#define imp(a) fixed << setprecision(a)
#define x first
#define y second
#define x first
#define y1 Y1
#define endl "\n"
#define lcm(a, b) (a * b / gcd(a, b))
#define int long long

using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pp;


main()
{
    ios::sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    srand(time(0));
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n, m, a[100], mx = -1, k = 0;
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for(int i = 0; i < n; ++i) {
        k += mx - a[i];
    }
    if(k > m) {
        cout << mx << " ";
    }
    else {
        m -= k;
        cout << mx + m / n + (m % n != 0) << " ";
        m += k;
    }
    cout << mx + m << endl;
}
