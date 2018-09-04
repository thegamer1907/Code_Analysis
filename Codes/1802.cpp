#include <stdio.h>
#include <iostream>
#include <climits>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <stack>
#include <deque>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <utility>
#include <queue>
#include <assert.h>
using namespace std;

#define ll long long
#define LL long long
#define sl(n) scanf("%lld", &n)
#define sf(n) scanf("%lf", &n)
#define si(n) scanf("%d", &n)
#define sch(n) scanf(" %c", &n)
#define ss(n) scanf("%s", n)
#define pii pair <int, int>
#define pll pair <ll, ll>
#define plp pair <int, pll >
#define pb push_back
#define fr first
#define sc second
#define all(a)  a.begin(),a.end()
#define Unique(a)  sort(all(a)),a.erase(unique(all(a)),a.end())

#define inf (1LL<<50)
#define eps 1e-9


int main ()
{
    //  freopen("inl.txt", "r", stdin);
    // freopen("outu.txt", "w", stdout);
    //  ios_base::sync_with_stdio(0); // no printf/scanf must be present
    ll cs, ts, i, j, k, x, y, z, q, m, n;

    while(sl(n)!=EOF)
    {
        sl(m);
        sl(k);

        ll lo = 1, hi = 1e13, mid;

        while (lo <= hi)
        {
            mid = (lo + hi)/2;
            ll sum = 0;
            for (ll row = 1; row <= n; row++)
            {
                sum += min(m, (mid-1)/row);
            }

            //    cout << mid << " " << sum << " " << k << endl;

            if (sum <= k-1)
            {
                x = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid-1;
            }
        }

        cout << x << endl;
    }
    return 0;
}
