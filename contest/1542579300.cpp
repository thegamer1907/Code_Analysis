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
int n, k;
int cnt[16];

int main() {
    cin >> n >> k;
    int tmp, bit;
    for (int i = 0; i < n; ++i) {
        tmp = 0;
        for (int j = 0; j < k; ++j) {
            scanf("%d", &bit);
            tmp = (tmp << 1) | bit;
        }
        ++cnt[tmp];
    }

    int mask = (1 << k) - 1;
    if (cnt[0]) {
        cout << "YES";
        return 0;
    }

    for (int i = 1; i < (1 << k); ++i) {
        if (cnt[i]) {
            int need = mask ^ i;
            for (int j = 1; j < (1 << k); ++j) {
                if (cnt[j] && (need | j) == need) {
                    cout << "YES";
                    return 0;
                }
            }
        }
    }

    cout << "NO";

    return 0;
}