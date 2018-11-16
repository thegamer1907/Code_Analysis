#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <utility>
#include <algorithm>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <deque>
#include <queue>
#include <stack>
#include <vector>
#include <tuple>
#include <random>
#include <time.h>
#include <math.h>
#include <fstream>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int,int> pii;
typedef vector<int> vi;

const int BASE = 123457, INF = 2147483647;
const long long LL_INF = 9223372036854775807LL;
const double PI = 3.141592653589793238;

/*template <typename... Args>  void read(Args&... arg) { ((cin >> arg), ...); }
template <typename... Args>  void writel(bool with_space = true, Args... arg) {
    if (with_space) {
        ((cout << arg << " "), ...);
    }
    else ((cout << arg), ...);
}
template <typename... Args>  void writeln(bool with_space = false, Args... arg) {
    if (with_space) {
        ((cout << arg << " "), ...);
    }
    else ((cout << arg), ...);
    cout << endl;
}*/
const int MAX_N = 200000;
ll n, m, maxx, minn, ans = 0, a, b, k;
int main(){
    ios::sync_with_stdio(0); cin.tie(); cout.tie();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    cin >> n >> a >> b;
    a--; b--;
    m = n;
    while (n > 1) {
        int x = a & 1, y = b & 1;
        k++;
        n /= 2;
        a /= 2;
        b /= 2;
        if (x != y && a == b) ans = k;
        //cout << n << " " << a << " " << b << endl;
    }
    if (1 << ans != m) cout << ans;
    else cout << "Final!";
    return 0;
}
