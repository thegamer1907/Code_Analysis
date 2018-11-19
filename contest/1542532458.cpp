//Created by Allen Li

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<double,double> pd;

typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;

#define long ll
#define FAST ios::sync_with_stdio(0); cin.tie(0);
#define println(x) cout << x << '\n'
#define FOR(i, a) for(int i=0;i<a;i++)
#define F0R(i, a, b) for(int i=a;i<b;i++)
#define FORN(i, a) for(int i=0;i<=a;i++)
#define F0RN(i, a, b) for(int i=a;i<=b;i++)
#define all(x) x.begin(), x.end()

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

unordered_set<int> exists;
int main() { FAST
    int n, k;
    cin >> n >> k;
    FOR(i, n) {
        int curr = 0;
        FOR(i, k) {
            curr *= 2;
            int temp;
            cin >> temp;
            curr += temp;
        }
        exists.insert(curr);
    }
    FOR(i, 1 << k)
        FOR(j, 1 << k) {
            if(i&j)
                continue;
            if(exists.count(i) && exists.count(j)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    cout << "NO" << endl;
}
