#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <cstdio>


using namespace std;

typedef vector<int> VI;
typedef long long LL;
typedef vector<VI> VII;
typedef vector<LL> VLL;
#define FOR(x, b, e) for(unsigned x = (b); x <= (e); x++)
#define FORD(x, b, e) for(int x = (b); x >= (e); x--)
#define REP(x, b) for(unsigned x = 0; x < (b); x++)
#define VAR(x, n) __typeof(n) x = (n)
#define FOREACH(i, c) for(VAR(i, (c).begin()); i != (c).end(); i++)
#define PB push_back
#define ALL(c) (c).begin(), (c).end()
#define MP make_pair
#define ST first
#define ND second

const int INF = 1000000005;

int main() {
    ios_base::sync_with_stdio(0);
    LL n, q;
    cin >> n >> q;

    VLL s(n + 1, 0);
    REP (i, n) {
        cin >> s[i+1];
        s[i+1] += s[i];
    }
    LL dmg = 0, cur_dmg;
    REP(i, q) {
        cin >> cur_dmg;
        dmg += cur_dmg;
        LL a = 0, b = n;
        LL c;
        while (a < b) {
            c =  a + (b - a + 1) / 2;
            if (s[c] <= dmg) {
                a = c;
            } else {
                b = c - 1;
            }
        }
        if (a == n) {
            dmg = 0;
            a = 0;
        }
        cout << n - a << endl;
    }

    return 0;
}
