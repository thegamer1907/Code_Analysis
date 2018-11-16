#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <bitset>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <cstring>
#include <queue>
#include <memory.h>
#include <cmath>

using namespace std;

#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
#define FOR0(i,n) for( i = 0 ; i < n ; ++i )
#define FOR1(i,n) for( i = 1 ; i <= n ; ++i )
#define FI first
#define SE second
#define pb push_back

typedef long long LL;

int n, h, a, ans = 0;
int i;

int main() {
    ios::sync_with_stdio(false);

    cin >> n >> h;
    ans = n;
    FOR1(i, n) {
        cin >> a;
        if (h < a) ans += 1;
    }
    cout << ans << endl;
}