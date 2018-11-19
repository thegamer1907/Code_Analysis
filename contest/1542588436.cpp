#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <map>
#include <set>
#include <bitset>
#include <sstream>
#include <cstdlib>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <climits>
#include <ctype.h>
using namespace std;

#define PI acos(-1.0)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define fi first
#define se second

#define eps 1e-8
#define mod 1000000007

typedef long double ld;
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<vector<int>> vvi;

/******************************** template ********************************/
#define MAXN 110
int h, m, s, t1, t2;
double angle[3];

int gao(int t) {
    double a = (t % 12) * 30.0;
    if (a > angle[0] && a < angle[1]) return 1;
    if (a > angle[1] && a < angle[2]) return 2;
    return 3;
}

int main() {
    cin >> h >> m >> s >> t1 >> t2;
    angle[0] = h * 30.0 + 1.0 / 120 * (m * 60 + s);
    angle[1] = m * 6.0 + 0.1 * s;
    angle[2] = s * 6.0;
    for (int i = 0; i < 3; ++i) {
        if (angle[i] > 360) {
            angle[i] -= 360;
        }
    }

    sort(angle, angle + 3);
    if (gao(t1) == gao(t2)) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}