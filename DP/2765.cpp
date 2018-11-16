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

int in() { int x; scanf("%d", &x); return x; }
ll lin() { ll x; scanf("%lld", &x); return x; }

int main() {
    int n;
    cin >> n;
    VI a;
    while (n){
        a.push_back(n % 10);
        n /= 10;
    }
    reverse(ALL(a));
    VL ans;
    while (1){
        int tmp = 0;
        REP(i,a.size()){
            tmp *= 10;
            if (a[i]){
                tmp += 1;
                a[i]--;
            }
        }
        if (tmp) ans.push_back(tmp);
        else break;
    }
    cout << ans.size() << endl;
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
