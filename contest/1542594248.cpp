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
string s, t;
ll n;
bool a, b;

int main() {
    cin.sync_with_stdio(); cin.tie(0);
    cin >> s >> n;
    upn(i, 1, n) {
        cin >> t;
        if (t[0] == s[1])
            b = true;
        if (t[1] == s[0])
            a = true;
        if (s == t || (a && b)) {
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
}
