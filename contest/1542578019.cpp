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

inline int mask(int x) { return 1 << x; }

const int MAXA = 15;
const int MAXS = 202;

string prefix[MAXS];
string suffix[MAXS];

set<int> masks[MAXS][MAXA+1];

int n, q;

inline int str2mask(const string& s) {
    int m = 0; int ssz = s.size();

    FORN(i, ssz) {
        if (s[i] == '1') {
            m |= mask(i);
        }
    }

    return m;
}

int main() {
    GI(n);

    FOR1(i, n) {
        cin >> prefix[i]; suffix[i] = prefix[i];

        int l = prefix[i].size();

        for (int j = 1; j <= min(MAXA, l); j++) {
            for (int k = 0; k + j <= l; k++) {
                int m = str2mask(prefix[i].substr(k, j));
                masks[i][j].insert(m);
            }
        }

        prefix[i] = prefix[i].substr(0, MAXA);
        suffix[i] = suffix[i].substr(max(0, l-MAXA), MAXA);
    }

    int i = n;

    GI(q);

    int a, b;

    while (q--) {
        i++;

        GI(a);
        GI(b);

        FOR1(j, MAXA) {
            for (auto m : masks[a][j]) {
                masks[i][j].insert(m);
            }
            for (auto m : masks[b][j]) {
                masks[i][j].insert(m);
            }
        }

        string s = suffix[a] + prefix[b];

        int l = s.size();

        for (int j = 1; j <= min(MAXA, l); j++) {
            for (int k = 0; k + j <= l; k++) {
                int m = str2mask(s.substr(k, j));
                masks[i][j].insert(m);
            }
        }

        prefix[i] = prefix[a] + prefix[b];
        suffix[i] = suffix[a] + suffix[b];

        l = suffix[i].size();

        prefix[i] = prefix[i].substr(0, MAXA);
        suffix[i] = suffix[i].substr(max(0, l-MAXA), MAXA);

        int res = 0;

        FOR1(j, MAXA) {
            if (masks[i][j].size() == mask(j)) {
                res = j;
            }
        }

        printf("%d\n", res);
    }

    return 0;
}
