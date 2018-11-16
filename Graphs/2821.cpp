//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iterator>
#include <map>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <iomanip>
#include <fstream>

using namespace std;

typedef pair <int, int> pii;
typedef pair <long long, long long> pll;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define endl "\n"
#define mp make_pair

const int mod = 1000000007;
const int INF = 1000000000;

int n, m, color[100005];
unordered_set <int> e[100005];
int result = 100000;

int main() {
    int a, b;

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> color[i];

    for (int i = 0; i < m; i++) {
        cin >> a >> b;

        if (color[a] != color[b]) {
            e[color[a]].insert(color[b]);
            e[color[b]].insert(color[a]);
        }
    }

    for (int i = 1; i <= n; i++) {
        if ((e[color[i]].size() > e[result].size()) || ((e[result].size() == e[color[i]].size()) && (result > color[i])))
            result = color[i];
    }

    cout << result << endl;

    return 0;
}