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
int n;
string pass;
string ss[MAXN];
bool b[26], e[26];

int main() {
    cin >> pass >> n;
    memset(b, 0, sizeof(b));
    memset(e, 0, sizeof(e));
    for (int i = 0; i < n; ++i) {
        cin >> ss[i];
        if (ss[i] == pass) {
            cout << "YES";
            return 0;
        }
        b[ss[i][0] - 'a'] = true;
        e[ss[i][1] - 'a'] = true;
    }
    if (e[pass[0] - 'a'] && b[pass[1] - 'a']) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}