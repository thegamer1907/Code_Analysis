#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <deque>
#include <queue>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

#define int64 long long
#define ii pair <int, int>
#define fr first
#define sc second

bool check(int64 val, int64 n){
    int64 res = 0, t = n;
    while (n >= val){
        n -= val;
        n -= n / 10;
        res += val;
    }
    return res + n >= (t + 1) / 2;
}

int main(){
    cout << setprecision(10) << fixed;
    ios::sync_with_stdio(false), cin.tie(0);
    //freopen("input.txt", "r", stdin);
    int64 n, l, r, mid;
    cin >> n;
    l = 1;
    r = n;
    while (l < r - 1){
        mid = (l + r) / 2;
        if (check(mid, n)) r = mid;
        else l = mid;
    }
    if (check(l, n)) cout << l;
    else cout << r;
    return 0;
}
