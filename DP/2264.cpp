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
#include <bitset>
using namespace std;
 
#include <assert.h>

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
typedef pair<P, P> state;
 
int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }

int main() {
    int n, m;
    cin >> n >> m;
    VI a(n);
    REP(i,n) a[i] = in();

    VI ans(n);
    set<int> st;
    FORR(i,n-1,0){
        st.insert(a[i]);
        ans[i] = st.size();
    }

    while (m--){
        printf("%d\n", ans[in() - 1]);
    }
    return 0;
}