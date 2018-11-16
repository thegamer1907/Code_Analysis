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
#include <complex>
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
    string s, t;
    cin >> s >> t;

    int x = 0, y = 0, a = 0, n = s.length();
    REP(i,n){
        if (s[i] == '+') x++;
        else x--;
        if (t[i] == '+') y++;
        else if (t[i] == '-') y--;
        else a++;
    }

    int d = abs(y - x);
    if (d > a) cout << 0 << endl;
    else{
        int m = 30;
        vector<vector<double>> dp(a + 1, vector<double> (m));
        dp[0][m/2] = 1.0;
        REP(i,a) FOR(j,1,m-2){
            dp[i+1][j+1] += dp[i][j] / 2;
            dp[i+1][j-1] += dp[i][j] / 2;
        }
        printf("%.15f", dp[a][m/2+d]);
    }

    return 0;
}