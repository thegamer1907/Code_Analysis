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

int main(){
    cout << setprecision(10) << fixed;
    ios::sync_with_stdio(false), cin.tie(0);
    //freopen("input.txt", "r", stdin);
    int n, m = 2e9;
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i], m = min(a[i], m);
    m = m / n * n;
    for (int i = 0; i < n; i++) a[i] -= m;
    int i = 0, cnt = 0;
    while (1){
        if (a[i] <= cnt) break;
        i = (i + 1) % n;
        cnt++;
    }
    cout << i + 1;
    return 0;
}
