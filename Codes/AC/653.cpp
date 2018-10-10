#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <cmath>
#include <deque>
#include <algorithm>
#include <random>
#include <ctime>
using namespace std;

#define int int64_t
#define pb push_back
#define pbb pop_back
#define pf pop_front
#define pff push_front
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define rall(c) (c).rbegin(),(c).rend()
typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;

const int INF = 1e9, MOD = 1e9 + 7, MAXA = 1e6 + 5;
const ld EPS = 1e-9, PI = acos(-1);

bool check(int num)
{
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return (sum == 10);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int k, i;
    cin >> k;

    for (i = 19; k > 0; ++i)
        if (check(i))
            k--;

    cout << i - 1 << endl;

    return 0;
}
