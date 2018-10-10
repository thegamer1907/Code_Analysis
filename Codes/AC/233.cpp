#include <iostream>
#include <fstream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <cstring>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <array>
using namespace std;

#define REP(i,n) for(int i=0; i<n; ++i)
#define FOR(i,a,b) for(int i=a; i<=b; ++i)
#define FORR(i,a,b) for (int i=a; i>=b; --i)
#define ALL(c) (c).begin(), (c).end()

typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef pair<int,int> P;
typedef pair<ll,ll> PL;

int main() {
    int n;
    cin >> n;
    VI a(n);
    REP(i,n) cin >> a[i];
    VI s(n+1);
    REP(i,n) s[i+1] = s[i] + a[i];
    int q;
    cin >> q;
    while (q--){
        int x;
        cin >> x;
        cout << (upper_bound(ALL(s), x-1) - s.begin()) << endl;
    }

    return 0;
}