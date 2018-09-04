//#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <iterator>
#include <utility>
#include <sstream>


#define mp make_pair
#define fi first
#define se second
#define endl "\n"
#define sqr(a) (a)*(a)

using namespace std;


typedef long long ll;

ll n, k, l, r, c;

bool check(ll k) {
    ll x = n;
    ll ans = 0;
    while (x > 0) {
        ll y = min(k,x);
        x = x - y;
        ans += y;

        x = x - x/10;
    }

    x = n/2;
    if (n % 2 != 0) x++;
    if (ans >= x) return 1; else return 0;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
//    freopen("", "r", stdin);
//    freopen("", "w", stdout);

    cin >> n;

    l = 1; r = n;
    while (l < r) {
        c = (l+r)/2;
        if (check(c)) r = c; else l = c+1;
    }

    cout << l << endl;

    return 0;
}

