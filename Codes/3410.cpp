#pragma region Header

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <list>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <queue>
#include <stack>
#include <cmath>
#include <algorithm>
#include <iomanip>

typedef long long ll;

#define pii pair<int, int>
#define pll pair<ll, ll>
#define uset unordered_set
#define umap unordered_map
#define mp make_pair
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#pragma comment(linker, "/STACK:64777216")

using namespace std;

#ifdef LOCAL
#define eprintf(...) fprintf(stdout, __VA_ARGS__)
#define print_var(x) cout << #x << " = " << x << endl
#define print_array(a) { cout << #a << " = "; for (auto e : a) cout << e << " "; cout << endl; }
#define print_endl() cout << endl
#else
#define eprintf(...) (void)0
#define print_var(x) (void)0
#define print_array(a) (void)0
#define print_endl() (void)0
#endif

const int inf = (int)1e9 + 5;
const ll INF = (ll)1e18 + 5;

#pragma endregion

ll calc(ll n, ll k)
{
    ll res = 0;
    while(n > 0)
    {
        ll cur = min(n, k);
        res += cur;
        n -= cur;
        n -= n / 10;
    }
    return res;
}

void solve()
{
    ll n;
    cin >> n;
    
    ll l = 1, r = n;
    
    while(l != r)
    {
        ll mid = (l + r) / 2;
        if (calc(n, mid) * 2 >= n)
            r = mid;
        else
            l = mid + 1;
    }
    
    cout << l << endl;
    
    // ll n = 68;
    
    // for(ll i = 1; i <= n; i++)
    // {
    //     cout << i << ": " << calc(n, i) << endl;
    // }
}

int main()
{
	string filename = "acm";

#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#else
	//freopen((filename + ".in").data(), "r", stdin);
	//freopen((filename + ".out").data(), "w", stdout);
#endif // !LOCAL

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.precision(15);

	solve();

	eprintf("\n\ntime: %.3lf\n", double(clock()) / CLOCKS_PER_SEC);
	return 0;
}