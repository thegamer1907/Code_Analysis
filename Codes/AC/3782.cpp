#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <limits>
#include <utility>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <map>
#include <stack>
#include <numeric>
#include <set>

#define endl '\n'
using namespace std;

typedef long long ll;

ll need[3], have[3], price[3], money;

ll solve(ll total) {
    ll ret = 0;
    while (true) {
        ll debt = 0;
        for (int i = 0; i < 3; i++) {
            have[i] -= need[i];
            if (have[i] < 0) {
                debt += price[i] * abs(have[i]);
                have[i] = 0;
            }
        }

        if (debt < total && debt <= money) {
            money -= debt;
            ret++;
        } else {
            break;
        }
    }

    return ret + money / total;
}

/* second solution */

ll cost(ll hamburgers) {
    ll ret = 0;
    for (int i = 0; i < 3; i++) {
        ret += max(0LL, hamburgers * need[i] - have[i]) * price[i];
    }
    return ret;
}

ll bisearch() {
    ll lo = 0, hi = 1000000000000LL + 150LL;
    while (lo + 1 < hi) {
        ll mid = (lo + hi) / 2;
        if (cost(mid) - money > 0)
            hi = mid;
        else 
            lo = mid;
    }
    return lo;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;
    for (const auto c : str)
        if (c == 'B') need[0]++;
        else if (c == 'S') need[1]++;
        else need[2]++;


    for (int i = 0; i < 3; i++)
        cin >> have[i];

    for (int i = 0; i < 3; i++)
        cin >> price[i];

    cin >> money;

    //ll total = 0;
    //for (int i = 0; i < 3; i++)
    //    total += need[i] * price[i];
    //cout << solve(total) << endl;

    cout << bisearch() << endl;
    return 0;
}