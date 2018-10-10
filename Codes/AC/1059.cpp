#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

#define MAX 111111

struct Friend {
    int money, factor;
} f[MAX];

bool compare(const Friend &a, const Friend &b) {
    return a.money < b.money;
}

int n, d, a, cf;

int main() {
    cin >> n >> d;
    for (int i=0; i<n; i++)
        cin >> f[i].money >> f[i].factor;
    sort(f, f+n, compare);
    int64_t best = f[0].factor, current = best;
    for (int j=1, i=0; j<n; j++) {
        current += (int64_t)f[j].factor;
        while (f[j].money - f[i].money > d - 1)
            current -= (int64_t)f[i++].factor;
        if (current > best)
            best = current;
    }

    cout << best << endl;

    return 0;
}
