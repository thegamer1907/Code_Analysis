#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <set>
#include <map>
#include <cassert>
#include <queue>
#include <ctime>
#include <string>
#include <cstring>
#include <random>
#define mp make_pair
#define pb push_back
#define NAME ""
#define y1 y1_423
#define list lista

using namespace std;

typedef long long ll;
typedef long double ld;

template<typename T>
ostream& operator << (ostream& cout, const vector<T> &a) {
    if ((int)a.size() == 0) {
    	return (cout << "()");
    }
    cout << "(" << a[0];
    for (int i = 1; i < (int)a.size(); i++) {
    	cout << "; " << a[i];
    }
    return (cout << ")");
}

template<typename T>
ostream& operator << (ostream& cout, const set<T> &a) {
    if ((int)a.size() == 0) {
    	return (cout << "{}");
    }
    auto it = a.begin();
    cout << "{" << *it;
    ++it;
    for (; it != a.end(); ++it) {
    	cout << "; " << *it;
    }
    return (cout << "}");
}

template<typename T>
ostream& operator << (ostream& cout, const multiset<T> &a) {
    if ((int)a.size() == 0) {
    	return (cout << "{}");
    }
    auto it = a.begin();
    cout << "{" << *it;
    ++it;
    for (; it != a.end(); ++it) {
    	cout << "; " << *it;
    }
    return (cout << "}");
}

template<typename T1, typename T2>
ostream& operator << (ostream& cout, const pair<T1, T2> &a) {
    return cout << "(" << a.first << "; " << a.second << ")";
}

random_device gen;
mt19937 rnd(gen());

const int nmax = 2000 * 1000;
const int inf = 2000 * 1000 * 1000;
const ll infl = 1000ll * 1000ll * 1000ll * 1000ll * 1000ll * 1000ll;
const int mod = 1000 * 1000 * 1000 + 7;
const ld pi = acos(-1.0);

vector<pair<ld, int> > a;

int main() {
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //freopen(NAME".in", "r", stdin);freopen(NAME".out", "w", stdout);
    ld h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if (h == 12) h = 0;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;
    ld eng1 = t1 * 360.0 / 12;
    ld eng2 = t2 * 360.0 / 12;
    ld h1 = h * 360.0 / 12 + m * 360.0 / 12 / 60 + s * 360.0 / 12 / 60 / 60;
    ld m1 = m * 360.0 / 60 + s * 360.0 / 60 / 60;
    ld s1 = s * 360.0 / 60;
    a.pb({eng1, 1});
    a.pb({eng2, 1});
    a.pb({h1, 0});
    a.pb({m1, 0});
    a.pb({s1, 0});
    sort(a.begin(), a.end());
    for (int i = 0; i < 5; i++) {
        a.pb({a[i].first + 360, a[i].second});
    }
    for (int i = 1; i < 10; i++) {
        if (a[i].second == 1 && a[i - 1].second == 1) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}

