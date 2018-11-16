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



int n;
const int MAXN = 10010;
int e[MAXN];
int c[MAXN];

int p[MAXN];

int find(int x) {
    return (p[x] == x) ? x : (p[x] = find(p[x]));
}

void union_(int x, int y) {
    p[find(x)] = find(y);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0; i < n - 1; i++) {
        cin >> e[i]; e[i]--;
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        p[i] = i;
    }
    for (int i = 0; i < n - 1; i++) {
        if (c[i+1] == c[e[i]]) 
            union_(i+1, e[i]);
    }
    set<int> parents;
    for (int i = 0; i < n; i++) {
        parents.insert(find(i));
    }
    cout << parents.size() << endl;
}
