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

int n, k;

int mask(int x) {
    return 1 << x;
}

bool contains(int s, int x) {
    return s & mask(x);
}

set<int> problems;

int main() {
    GI(n);
    GI(k);

    int x;

    FORN(i, n) {
        int problem = 0;

        FORN(j, k) {
            GI(x);
            if (x) problem |= mask(j);
        }

        problems.insert(problem);
    }

    if (problems.count(0)) {
        printf("YES\n");
        return 0;
    }

    for (auto a : problems) {
        for (auto b : problems) {
            if ((a & b) == 0) {
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");
    return 0;
}
