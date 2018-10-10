#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>
#include <queue>
#include <random>
#include <ctime>

#define ll long long
#define ld long double
#define F first
#define S second
#define upn(x, init, n) for (ll x = init; x <= n; ++x)
#define upiter(x, container) for (auto x = container.begin(); x != container.end(); ++x)
#define downn(x, init, n) for(ll x = init; x >= n; --x)
#define downiter(x, container) for (auto x = container.rbegin(); x != container.rend(); ++x)
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define el '\n'
#define PI acos(-1.0)
#define eps 0.0000001
#define mod 1000000007

using namespace std;
ll n, k;

ll sum(ll a) {
    ll ret = 0;
    while (a) {
        ret += a % 10;
        a /= 10;
    }
    return ret;
}
int main() {
    cin.sync_with_stdio(0);   cin.tie(0);
    cin >> k;
    upn(i, 1, 20000000) {
        if (sum(i) == 10) {
            ++n;
            if (n == k) {
                cout << i << el;
                return 0;
            }
        }
    }
}