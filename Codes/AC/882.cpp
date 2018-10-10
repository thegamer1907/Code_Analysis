// Main maut ko takiya, aur kafan ko chadaar banakar audhta hoon!

#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

#define pb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define len(a) int(a.size())
#define sqrt sqrtl

#ifdef ONLINE_JUDGE
    #define endl "\n"
#endif

//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setfill -   cout << setfill ('x') << setw (5); cout << 77 << endl; prints xxx77
//setprecision - cout << setprecision (14) << f << endl; Prints x.xxxx
//cout.precision(x)  cout<<fixed<<val;  // prints x digits after decimal in val

#define int ll
#define vll vector< int >
#define pll pair< int, int >
#define vvll vector< vll >
#define vpll vector< pll >

#define minpqll priority_queue<int,vector<int>,greater<int> >

#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("O2")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS

#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)

    template <typename Arg1>
    void __f(const char* name, Arg1&& arg1)
    {
        cerr << name << " : " << arg1 << endl;
    }

    template <typename Arg1, typename... Args>
    void __f(const char* names, Arg1&& arg1, Args&&... args)
    {
        const char* comma = strchr(names + 1, ',');
        cerr.write(names, comma - names) << " : " << arg1 << "  ";
        __f(comma + 1, args...);
    }

#else
#define trace(...)
#endif // ifndef ONLINE_JUDGE

const double pi = 3.141592653589793238462643383279502884197169399375105820974944;
const double e = 2.71828182845904523536028747135266249775724709369995;
const int mod = 1e9 + 7;
const int inf = 2e18;
const int ninf = -2e18;
const int N5 = 1e5 + 10;
const int N6 = 1e6 + 10;

int power(int x, int y, int mod = inf)
{
    int ans = 1;
    x %= mod;
    while(y)
    {
        if(y&1)
            ans = (x * ans) % mod;

        x = (x * x) % mod;
        y >>= 1;
    }
    return ans;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    time_t t1, t2;
    t1 = clock();

    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;
    s = '.' + s;

    int lo = 1;
    int hi = n;
    int prefa[n] = {0}, prefb[n] = {0};

    for(int i = 1; i <= n; i++)
    {
        prefa[i] = prefa[i-1] + (s[i] == 'a');
        prefb[i] = prefb[i-1] + (s[i] == 'b');
    }

    while(lo < hi)
    {
        int i = (lo + hi + 1) / 2;

        bool possible = false;

        for(int l = 1; l <= n; l++)
        {
            int r = (l + i - 1);
            if(possible || r > n) break;
            possible |= (min((prefa[r] - prefa[l-1]), (prefb[r] - prefb[l-1])) <= k);
        }

        if(possible)
            lo = i;
        else
            hi = i - 1;
    }

    cout<<lo;
    // 5 2 aaaaa


    t2 = clock();
    #ifndef ONLINE_JUDGE
        cerr << endl << "time taken: " << t2 - t1 << endl;
    #endif // ONLINE_JUDGE

    return 0;
}
