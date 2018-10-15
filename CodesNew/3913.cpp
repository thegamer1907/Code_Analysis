#include <iostream>
#include <cstdio>
using namespace std;
#define dbg(x) cout << #x << " = " << x << endl;
typedef long long ll;
typedef unsigned long long ull;

const int maxn = 1e5 + 5;

int n, m, k;
float a;
ll avg, sum, x;
ll maxx;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        sum -= x;
        maxx = max(maxx, x);
    }
    sum += n * maxx;
    if (sum < maxx) maxx += (maxx - sum + n - 2) / (n - 1);
    cout << maxx;
    return 0;
}
