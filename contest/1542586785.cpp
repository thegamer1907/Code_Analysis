#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <set>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <memory.h>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <queue>

using namespace std;

typedef long long LL;
typedef pair<int,int> PII;

#define MP make_pair
#define PB push_back
#define FF first
#define SS second

#define FORN(i, n) for (int i = 0; i <  (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD(i, n) for (int i = (int)(n) - 1; i >= 0; i--)

#define DEBUG(X) { cout << #X << " = " << (X) << endl; }
#define PR0(A,n) { cout << #A << " = "; FORN(_,n) cout << A[_] << ' '; cout << endl; }

#define MOD 1000000007
#define INF 2000000000

int GLL(LL& x) {
    return scanf("%lld", &x);
}

int GI(int& x) {
    return scanf("%d", &x);
}

int h, m, s, t1, t2;

set<int> bad;

int main() {
    cin >> h >> m >> s >> t1 >> t2;

    s *= 2; // [0, 120)

    m *= 2;
    if (s != 0) m++; // [0, 120)

    if (h == 12) h = 0;

    h = 10 * h + 2 * (m / 24);
    if (s != 0 || (m % 24 != 0)) h++;

    bad.insert(s);
    bad.insert(m);
    bad.insert(h);

    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;

    t1 *= 10;
    t2 *= 10;

    int i = t1;

    bool ok = true;

    while (i != t2) {
        i = (i + 1) % 120;

        if (bad.count(i)) {
            ok = false;
            break;
        }
    }

    if (ok) {
        printf("YES\n");
        return 0;
    }

    i = t1;

    ok = true;

    while (i != t2) {
        i = (i + 119) % 120;

        if (bad.count(i)) {
            ok = false;
            break;
        }
    }

    if (ok) {
        printf("YES\n");
        return 0;
    }

    printf("NO\n");
    return 0;
}
