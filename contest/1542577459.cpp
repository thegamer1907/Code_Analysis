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

const int nmax = 1000;
const int inf = 2000 * 1000 * 1000;
const ll infl = 1000ll * 1000ll * 1000ll * 1000ll * 1000ll * 1000ll;
const int mod = 1000 * 1000 * 1000 + 7;
const ld pi = acos(-1.0);
const int mag = 21;

struct node {
    vector<unsigned long long> a[mag];
    int cnt[mag];
    node() {
        for (int i = 0; i < mag; i++) {
            a[i].resize((1 << i) / 64 + (((1 << i) & 63) > 0));
            cnt[i] = 0;
        }
    }
};

void add(int ind, int x, struct node &a) {
    int index = x / 64;
    a.a[ind][index] |= (1ll << (x & 63));
}

void join(const struct node &a, const struct node &b, struct node &c) {
    c = node();
    for (int i = 1; i < mag; i++) {
        int sz = (1 << i) / 64 + (((1 << i) & 63) > 0);
        for (int j = 0; j < sz; j++) {
            c.a[i][j] = (a.a[i][j] | b.a[i][j]);
        }
    }
}

void upd(struct node &a) {
    for (int i = 1; i < mag; i++) {
        int sz = (1 << i) / 64 + (((1 << i) & 63) > 0);
        a.cnt[i] = 0;
        for (int j = 0; j < sz; j++) {
            a.cnt[i] += __builtin_popcountll(a.a[i][j]);
        }
    }
}

int n;
string s[nmax];
node go[nmax];
pair<string, string> fuck[nmax];

int main() {
    //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
    //freopen(NAME".in", "r", stdin);freopen(NAME".out", "w", stdout);
    cin >> n;
    getline(cin, s[0]);
    for (int i = 0; i < n; i++) {
        getline(cin, s[i]);
        if (s[i].length() < mag) {
            fuck[i] = mp(s[i], s[i]);
        } else {
            fuck[i] = mp("", "");
            for (int j = 0; j < mag; j++) {
                fuck[i].first += s[i][j];
            }
            for (int j = (int)s[i].length() - mag; j < (int)s[i].length(); j++) {
                fuck[i].second += s[i][j];
            }
        }
        for (int k = 1; k < mag; k++) {
            int now = 0;
            if (k > (int)s[i].length()) break;
            for (int j = 0; j < k; j++) {
                now = now * 2 + s[i][j] - '0';
            }
            add(k, now, go[i]);
            for (int j = k; j < (int)s[i].length(); j++) {
                now = now * 2 + s[i][j] - '0';
                now &= (1 << k) - 1;
                add(k, now, go[i]);
            }
        }
        upd(go[i]);
    }
    int m;
    cin >> m;
    for (int i = n; i < m + n; i++) {
        int x, y;
        scanf("%d%d", &x, &y);
        x--, y--;
        join(go[x], go[y], go[i]);
        string ss = fuck[x].second + fuck[y].first;
        if (ss.length() < mag) {
            fuck[i] = mp(ss, ss);
        } else {
            fuck[i] = mp("", "");
            string ss1 = fuck[x].first + fuck[y].first;
            for (int j = 0; j < mag; j++) {
                fuck[i].first += ss1[j];
            }
            ss1 = fuck[x].second + fuck[y].second;
            for (int j = (int)ss1.length() - mag; j < (int)ss1.length(); j++) {
                fuck[i].second += ss1[j];
            }
        }
        for (int k = 1; k < mag; k++) {
            int now = 0;
            if (k > (int)ss.length()) break;
            for (int j = 0; j < k; j++) {
                now = now * 2 + ss[j] - '0';
            }
            add(k, now, go[i]);
            for (int j = k; j < (int)ss.length(); j++) {
                now = now * 2 + ss[j] - '0';
                now &= (1 << k) - 1;
                add(k, now, go[i]);
            }
        }
        upd(go[i]);
        int ind = mag - 1;
        for (int j = 1; j < mag; j++) {
            if (go[i].cnt[j] == (1 << j)) continue;
            ind = j - 1;
            break;
        }
        assert(ind != mag - 1);
        printf("%d\n", ind);
    }
    return 0;
}
