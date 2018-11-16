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

LL a, b;

int main() {
    ios::sync_with_stdio(false);

    cin >> a >> b;
    if (a > b) {
        cout << 0 << endl;
    }
    else if (b == a) {
        cout << 1 << endl;
    }
    else {
        cout << int(log(b * 1.0 / a) / log(1.5) + 1e-9) + 1 << endl;
    }
}