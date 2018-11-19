#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <cassert>
#define PB push_back
#define MP make_pair
#define sz(v) (ll((v).size()))
#define forn(i,n) for(ll i = 0; i < (n); ++i)
#define forv(i,v) forn(i,sz(v))
#define fors(i,s) for(auto i=(s).begin();i!=(s).end();++i)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<vi> vvi;

int b[256], e[256];

void yes() {
            cout << "YES" << endl; exit(0);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    string s; cin >> s;
    int n; cin >> n;
    vector<string> a;
    forn(i, n) {
        string t; cin >> t;
        a.PB(t);
    }
    forn(i, n) {
        if (a[i] == s) {
            yes();
        }
        if (a[i][1] == s[0]) {
            forn(j, n) {
                if (a[j][0] == s[1]) {
                    yes();
                }
            }
        }
    }
    cout << "NO" << endl;
}
