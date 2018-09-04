#include <algorithm>
#include <bitset>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

// c++11
#include <array>
#include <tuple>
#include <unordered_map>
#include <unordered_set>

#define mp make_pair
#define mt make_tuple
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

const int INF = 1 << 29;
const ll LL_INF = 1LL << 60;
const double EPS = 1e-9;
const ll MOD = 1000000007;

const int dx[] = {1, 0, -1, 0}, dy[] = {0, -1, 0, 1};
ll N, S;
vector<ll> A;

ll ok(const int n, ll s)
{
    vector<ll> costs(N);
    for (int i = 0; i < N; i++)
    {
        costs[i] = (ll)A[i] + (ll)(i + 1) * n;
    }
    sort(costs.begin(), costs.end());
    for (int i = 0; i < n; i++)
    {
        s -= costs[i];
    }
    // cerr << n << " " << s << " " << costs[0] << endl;
    // cout << n << " " << s << endl;
    return s;
}
int main()
{
    cin >> N >> S;
    A.resize(N);
    for (auto &val : A)
    {
        cin >> val;
    }
    int left = 0;
    int right = N + 10;
    ll result = 0;
    while (right - left > 1)
    {
        int med = (right + left) / 2;
        if (med > N)
        {
            right = med;
            continue;
        }
        ll res = ok(med, S);
        if (res >= 0)
        {
            left = med;
            result = S - res;
        }
        else
        {
            right = med;
        }
    }
    cout << left << " " << result << endl;
    return 0;
}
