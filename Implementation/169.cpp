#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
#define f first
#define s second
#define all(a) a.begin(), a.end()
#define pll pair <long long, long long>

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, a, b;

    cin >> n >> a >> b;
    ll cn = n;
    ll cur = 1;
    if (b < a) swap(a, b);

    while (1)
    {
        if ((a&1) && b == a + 1) break;
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        cur++;
    }
    if ((ll)log2(n) == cur)
    {
        cout << "Final!";
    }
    else cout << cur;
    return 0;
}
