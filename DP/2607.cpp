#include <bits/stdc++.h>
/*
  _   _     _____    __  __    ____      ______    ______      ___     ______
 /'\_/`\  /\  __`\  /\ \/\ \  /\  _`\   /\__  _\  /\  _  \    /'___\  /\  _  \
/\      \ \ \ \/\ \ \ \ \ \ \ \ \,\L\_  \/_/\ \/  \ \ \L\ \  /\ \__/  \ \ \L\ \
\ \ \__\ \ \ \ \ \ \ \ \ \ \ \ \/_\__ \    \ \ \   \ \  __ \ \ \ ,__\  \ \  __ \
 \ \ \_/\ \ \ \ \_\ \ \ \ \_/ \  /\ \L\ \   \ \ \   \ \ \/\ \ \ \ \_/   \ \ \/\ \
  \ \_\\ \_\ \ \_____\ \ `\___/  \ `\____\   \ \_\   \ \_\ \_\ \ \_\     \ \_\ \_\
   \/_/ \/_/  \/_____/  `\/__/    \/_____/    \/_/    \/_/\/_/  \/_/      \/_/\/_/
  __ __        __ __        __ __        __ __        __ __        __ __        __ __
 _\ \\ \__    _\ \\ \__    _\ \\ \__    _\ \\ \__    _\ \\ \__    _\ \\ \__    _\ \\ \__
/\__  _  _\  /\__  _  _\  /\__  _  _\  /\__  _  _\  /\__  _  _\  /\__  _  _\  /\__  _  _\
\/_L\ \\ \L_ \/_L\ \\ \L_ \/_L\ \\ \L_ \/_L\ \\ \L_ \/_L\ \\ \L_ \/_L\ \\ \L_ \/_L\ \\ \L_
  /\_   _  _\  /\_   _  _\  /\_   _  _\  /\_   _  _\  /\_   _  _\  /\_   _  _\  /\_   _  _\
  \/_/\_\\_\/  \/_/\_\\_\/  \/_/\_\\_\/  \/_/\_\\_\/  \/_/\_\\_\/  \/_/\_\\_\/  \/_/\_\\_\/
     \/_//_/      \/_//_/      \/_//_/      \/_//_/      \/_//_/      \/_//_/      \/_//_/
*/
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define ld long double
#define EPS (1e-15)
#define mod 1000000007
#define pii pair<ll, ll>
#define piii pair<pii, ll>
#define SIZE(x) (int) x.size()
#define to__string(x) static_cast<std::ostringstream&>((std::ostringstream() << std::dec << x)).str()
#define lp(i, a, n) for (int(i) = (a); (i) <= (int)(n); ++(i))
#define lpd(i, n, a) for (int(i) = (n); (i) >= (a); --(i))
#define bitcount(n) __builtin_popcountll(n)
#define readi(x) scanf("%d", &x);
#define readl(x) scanf("%lld", &x);
#define reads(x) scanf("%s", &x);
#define readc(x) scanf("%c", &x);
#define readd(x) scanf("%lf", &x);

using namespace std;
const int N = 3010101;
const int K = (int)log2(N) + 2;
const int SQRTN = (int) sqrt(N) + 7;
const ll infi = 1ll << 60;
ll n, a, len, ans, last;

int main() {
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
    io;
    cin >> n;
    lp (i, 0, n - 1) {
        cin >> a;
        if (a > last)
            ++len;
        else
            len = 1;
        ans = max(ans, len);
        last = a;
    }
    cout << ans << endl;
    return 0;
}
