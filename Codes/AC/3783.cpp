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
        ll dept = 0;
        for (int i = 0; i < 3; i++) {
            have[i] -= need[i];
            if (have[i] < 0) {
                dept += price[i] * abs(have[i]);
                have[i] = 0;
            }
        }

        if (dept < total && dept <= money) {
            money -= dept;
            ret++;
        } else {
            break;
        }
    }

    return ret + money / total;
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

    ll total = 0;
    for (int i = 0; i < 3; i++)
        total += need[i] * price[i];
    cout << solve(total) << endl;
    return 0;
}