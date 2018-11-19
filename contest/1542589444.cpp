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
#define PI 3.1415926535897932384626433832795
#define eps 0.0000001
#define mod 1000000007
#define mlli map<ll, ll>::iterator

using namespace std;
ll h, m, s, t1, t2;
pll a[6];

int main() {
    cin.sync_with_stdio(); cin.tie(0);
    cin >> a[1].F >> a[2].F >> a[3].F >> a[4].F >> a[5].F;
    a[1].F *= 5;
    a[4].F *= 5;
    a[5].F *= 5;
    a[4].S = a[5].S = -1;
    sort(a + 1, a + 6);
    upn(i, 1, 4) {
        if (a[i].S == -1 && a[i + 1].S == -1) {
            cout << "Yes\n";
            return 0;
        }
    }
    if (a[1].S == -1 && a[5].S == -1) {
        cout << "Yes\n";
        return 0;
    }
    cout << "No\n";
}