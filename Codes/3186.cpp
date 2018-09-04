#pragma region Header

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
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
#define PI M_PI
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


void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    
    ll min_val = 2e9;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        min_val = min(min_val, a[i]);
    }    
    
    // for(ll i =0; i < n; i++)
    // {
    //     a[i] -= min_val;
    // }
    
    ll ind = min_val % n;
    for(ll i = 0; i < n; i++)
    {
        if (min_val + i >= a[ind])
        {
            cout << ind + 1 << endl;
            break;
        }
        
        ind = (ind + 1) % n;
    }
}

int main()
{
	string filename = "lazy";

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