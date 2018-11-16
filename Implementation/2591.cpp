#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>
#include <string.h>
#include <climits>

#define fastio          std::ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define REP(i,n)        for(__typeof(n) i=0; i<n; ++i)
#define REPR(i,n)       for(__typeof(n) i=n-1; i>=0; --i)
#define sz(a)           int((a).size())
#define PB              push_back
#define MP              make_pair
#define F               first
#define S               second

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    int cnt = 0;
    REP(i, n) {
        int t; cin >> t;
        cnt += (t > h);
    }
    cout << n + cnt << endl;
    return 0;
}

