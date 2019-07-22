#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cassert>
#include <cstdint>
#include <numeric>
#include <bitset>

using namespace std;

using ll =  long long;
using Pll = pair<ll, ll>;
using Pii = pair<int, int>;

constexpr ll MOD = 1000000007;
constexpr long double EPS = 1e-10;
constexpr int dyx[4][2] = {
    { 0, 1}, {-1, 0}, {0,-1}, {1, 0}
};

int main() {
    std::ios::sync_with_stdio(0); cin.tie(0);
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> sp(m);
    for(int i=0;i<m;++i){
        cin >> sp[i];
    }

    ll p_start = 1, p_next_start = k+1;
    int sp_discarded = 0, ans = 0;
    while(sp_discarded < m) {
        auto itr = lower_bound(sp.begin()+sp_discarded, sp.end(), p_next_start);
        int tmp = distance(sp.begin()+sp_discarded, itr);
        if(tmp == 0) {
            p_start = p_next_start;
            p_next_start = p_start + k;
            continue;
        }
        sp_discarded += tmp;
        p_next_start += tmp;
        ++ans;
    }

    cout << ans << endl;
}