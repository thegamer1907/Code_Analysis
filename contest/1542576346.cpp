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

int nooc[4];
int hmap[16];

void yes() {
    cout << "YES" << endl; exit(0);
}
void no() {
    cout << "NO" << endl; exit(0);
}

int noo(int enc) {
    return (enc & 1) + ( (enc >> 1) & 1)
        + ( (enc >> 2) & 1) + ( (enc >> 3) & 1);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, k; cin >> n >> k;

    forn(i, n) {
        int enc = 0;
        forn(j, k) {
            int x; cin >> x;
            enc = enc * 2 + x;
        }
        hmap[enc]++;
    }

    // if exist 0, we're done
    if (hmap[0]) yes();

    // if exist 1, we find a zero on that digit, if yes than yes else on
    forn(j, 16) {
        if (noo(j) == 1 && hmap[j]) {
            forn(k, 16) {
                if ((k & j) == 0 && hmap[k]) {
                    yes();
                }
            }
            no();
        }
    }

    // if exist 2, similar
    forn(j, 16) {
        if ( noo(j) == 2 && hmap[j]) {
            forn(k, 16) {
                if ((k & j) == 0 && hmap[k]) {
                    yes();
                }
            }
        }
    }

    // if then exist 3, we know it's failure
    no();
}
