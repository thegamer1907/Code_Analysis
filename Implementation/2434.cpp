#include <bits/stdc++.h>
#ifndef DBG
#define dbg(...)
#else
#define dbg(...) {cerr << "\033[1;96m"; ostream& cout = cerr; \
(void)(cout); __VA_ARGS__; cerr << "\033[0m";} 
#endif
#define bgn(...) begin(__VA_ARGS__)
#define rsz(...) resize(__VA_ARGS__)
#define emp(...) emplace_back(__VA_ARGS__)
#define psh(...) push_back(__VA_ARGS__)
#define ddmp(...) dbg(dmp(__VA_ARGS__))
#define prt(...) print(cout, __VA_ARGS__)
#define dprt(...) dbg(print(cerr, __VA_ARGS__))
#define dmp(...) print(cerr, #__VA_ARGS__, '=', __VA_ARGS__)
#define all(...) bgn(__VA_ARGS__), end(__VA_ARGS__)
#define siz(...) static_cast< int >((__VA_ARGS__).size())
using namespace std; using ll = long long;
template< typename... t > using V = vector< t... >;
template< typename... t > using outit = ostream_iterator< t... >;
template< typename t > void print(ostream& os, const t& a)
{os << a <<  '\n';} template< typename t, typename... v >
void print(ostream& os, const t& a, v&&... b){os << a << ' '; print(os, b...);}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int t = 4 * 60 - k;

    int res = 0;
    for (int i = 1; i <= n; ++i)
        if (i * 5 <= t)
            ++res, t -= i * 5;

    prt(res);
}