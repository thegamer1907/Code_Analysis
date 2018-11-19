#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>
#include <cstdio>
#include <iterator>
#include <utility>
#include <iomanip>
#include <map>
#include <set>
//#include <bits/stdc++.h>

#define mp make_pair
#define fi first
#define se second
#define po_ba(x) pop_back(x)
#define pu_ba(x) push_back(x)
#define ba(x) back(x)
typedef long long ll;
using namespace std;

const ll maxLL = 1e18;
const ll maxL = 4294967296LL;
const ll maxI = 32767LL;
const ll maxB = 255LL;
const double pi = atan(1)*4;

map <ll, ll> maap;
ll n, m, i, j, a[111111][111], k, ol, b[111111];

int main()
{
    ios_base::sync_with_stdio(0);
    //freopen ("A.in", "r", stdin);
    //freopen ("A.out", "w", stdout);

    cin >> n >> k;
    for (i=1; i<=n; ++i){
        for (j=1; j<=k; ++j)cin >> a[i][j];
        ol = (long long)((1 * a[i][1]) + (2 * a[i][2]) + (4 * a[i][3]) + (8 * a[i][4]));
        ++maap[ol]; b[i] = ol;
    }

    for (i=1; i<=n; ++i){
        for (j=1; j<=k; ++j)a[i][j] = 1 - a[i][j];
        ol = (long long)((1 * a[i][1]) + (2 * a[i][2]) + (4 * a[i][3]) + (8 * a[i][4]));
        for (j=0; j<=16; ++j)if ((j | ol) == ol && maap[j]){
            cout << "YES"; return 0;
        }
    }

    cout << "NO";
    return 0;
}
