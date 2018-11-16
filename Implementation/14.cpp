#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>

#define double long double
#define int long long
#define inf (int)1e9

using namespace std;

signed main()
{
    int n, a, b; cin >> n >> a >> b;
    a--; b--;
    int k = log2(n);
    for (int i = 0; i < k; ++i) {
        a >>= 1;
        b >>= 1;
        if (a == b) {
            if (i == k - 1) return cout << "Final!" << endl, 0;
            else return cout << i + 1 << endl, 0;
        }
    }
}
