#include <bits/stdc++.h>
#if !defined(ONLINE_JUDGE)
#include "prettyprint.hpp"
#endif

#define ent(smth) smth.begin(), smth.end()
#define fori(i,n) for(intel i = 0; i < n; i++)
#define forn(n) for(intel i = 0; i < n; ++i)
#define forx(i,x,n) for(intel i = x; i < n; i++)
#define iter_for(_cont, _iterator) for(auto _iterator  = _cont.begin(); _iterator != _cont.end(); ++_iterator)

using namespace std;
typedef long long intel;
typedef pair<int, int> pInt;
int main()
{
    intel n, m, k; cin >> n >> m >> k;
    intel _k = k, lastk = 0;
    vector<intel> p(m); for(auto &x : p) cin >> x;
    int act = 0;
    while(m > 0)
    {
        intel l = lastk, r = p.size() + 1;
        // printf("Search for %I64d\n", k);
        while(r - l > 1)
        {
            int mid = (r + l)/2;
            if(p[mid] <= k ) l = mid;
            else r = mid;
        }
        //printf("Found %I64d on %I64d\n", p[l], l + 1LL);
        if(p[l] <= k) {
            k += (l - lastk + 1);
            m -= (l - lastk + 1);
            lastk = l + 1;
            act++;
            // cout << "FIRST\n";
        }
        else {
            k = k + _k*((p[lastk] - k) / _k + min(1LL,(p[lastk] - k) % _k));
        }
        // printf("Ended with %I64d and lastK = %I64d\n\n", l + 1LL, lastk);
    } cout << act;
}