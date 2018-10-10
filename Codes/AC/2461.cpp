#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <limits>
#include <utility>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <map>
#include <stack>
#include <numeric>
#include <set>

#define endl '\n'
using namespace std;

const int MAXX = 10 * 1000 * 1000 + 10;
int sieve[MAXX], fp[MAXX], psum[MAXX];

void fillSieve() {
    for (int i = 2; i < MAXX; i++)
        sieve[i] = i;

    int sqrn = sqrt(MAXX);
    for (int i = 2; i <= sqrn; i++)
        if (sieve[i] == i)
            for (int j = i*i; j < MAXX; j += i)
                if (sieve[j] == j)
                    sieve[j] = i;
}

void factor(int num) {
    while (num > 1) {
        int div = sieve[num];
        fp[div]++;
        while (num % div == 0)
            num /= div;
    }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> X(n);
    for (int i = 0; i < n; i++)
        cin >> X[i];
    fillSieve();

    for (int i = 0; i < n; i++) {
        factor(X[i]);
    }

    psum[0] = fp[0];
    for (int i = 1; i < MAXX; i++) {
        psum[i] = psum[i-1] + fp[i];
    }

    int m, from, to;
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> from >> to;
        from = min(from, MAXX-1);
        to = min(to, MAXX-1);
        cout << psum[to] - (from == 0 ? 0 : psum[from-1]) << endl;
    }

    return 0;
}