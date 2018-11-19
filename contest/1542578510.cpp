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

int n, k, x;
set<int> hey;

int main() {
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //freopen(NAME".in", "r", stdin);freopen(NAME".out", "w", stdout);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int now = 0;
        for (int j = 0; j < k; j++) {
            scanf("%d", &x);
            now = now * 2 + x;
        }
        hey.insert(now);
    }
    if (hey.find(0) != hey.end()) {
        printf("YES\n");
        return 0;
    }
    for (int u : hey) {
        for (int j = 0; j < (1 << k); j++) {
            if ((u & j) == 0 && hey.find(j) != hey.end()) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
    return 0;
}

