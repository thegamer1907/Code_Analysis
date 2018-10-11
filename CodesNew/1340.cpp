#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <utility>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <climits>
using namespace std;

#ifdef DEBUG
    #define dbg(...) fprintf(stderr, __VA_ARGS__)
#else
    #define dbg(...)
#endif

const int N = 3;
string s;
long long recept[N], piece[N], price[N], money;
map<char, int> m = {{'B', 0}, {'S', 1}, {'C', 2}};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> s;
    for (char ch : s) {
        recept[m[ch]]++;
    }
    for (int i = 0; i < N; ++i) {
        cin >> piece[i];
    }
    for (int i = 0; i < N; ++i) {
        cin >> price[i];
    }
    cin >> money;
    long long lo = 0, hi = 1e13, mid, need, cnt;
    while (lo < hi) {
        mid = lo + (hi - lo + 1) / 2;
        need = 0;
        for (int i = 0; i < N; ++i) {
            cnt = mid * recept[i] - piece[i];
            if (cnt > 0) {
                need += cnt * price[i];
            }
        }
        if (need <= money) {
            lo = mid;
        } else {
            hi = mid - 1;
        }
    }
    cout << lo << '\n';
}
// Time: O(), Space: O()
