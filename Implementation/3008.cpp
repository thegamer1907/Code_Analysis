#include <functional>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <memory.h>
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <iomanip>
#include <numeric>
#include <cstdio>
#include <memory>
#include <random>
#include <string>
#include <vector>
#include <deque>
#include <cmath>
#include <queue>
#include <list>
#include <map>
#include <set>

using namespace std;

typedef int64_t ll;
typedef uint64_t ull;
typedef long double ld;

void myassert (bool expr) { if (!expr) abort (); }

int gcd (int a, int b) { while (b) { a %= b; swap (a, b); } return a; }

int main ()
{
#ifdef LOCAL_FREOPEN
    freopen ("input.txt", "r", stdin);
    //freopen ("output.txt", "w", stdout);
#else
    //freopen ("paths.in", "r", stdin);
    //freopen ("paths.out", "w", stdout);
#endif

    cin.sync_with_stdio (false);
    cout.sync_with_stdio (false);
    cin.tie (0);

    int n; cin >> n;
    int m = 0, c = 0;
    for (int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        m += (x > y);
        c += (y > x);
    }
    if (m > c)
        cout << "Mishka";
    else if (c > m)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";

    return 0;
}