#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

const int M = 2e5 + 1;

long long n;
int m1, m2;
long long baseTime, avMagic;
pair<long long, long long> spells1[M], spells2[M];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> m1 >> m2;
    spells1[0].first = 0;
    cin >> spells1[0].second;
    spells2[0] = { 0, 0 };
    cin >> avMagic;
    for (int i = 1; i <= m1; ++i) {
        cin >> spells1[i].second;
    }
    for (int i = 1; i <= m1; ++i) {
        cin >> spells1[i].first;
    }
    for (int i = 1; i <= m2; ++i) {
        cin >> spells2[i].second;
    }
    for (int i = 1; i <= m2; ++i) {
        cin >> spells2[i].first;
    }

    sort(spells1, spells1 + m1 + 1);
    sort(spells2, spells2 + m2 + 1);
    for (int i = 1; i <= m1; ++i) {
        spells1[i].second = min(spells1[i - 1].second, spells1[i].second);
    }
    for (int i = 1; i <= m2; ++i) {
        spells2[i].second = max(spells2[i - 1].second, spells2[i].second);
    }

    long long res = 4e18;
    for (int i = 0, j = m2; i <= m1; ++i) {
        if (spells1[i].first > avMagic) {
            break;
        }
        while (spells1[i].first + spells2[j].first > avMagic) {
            --j;
        }
//        cout << "#\n";
//        cout << i << ": " << spells1[i].first << ' ' << spells1[i].second << '\n';
//        cout << j << ": " << spells2[j].first << ' ' << spells2[j].second << '\n';
        res = min(res, spells1[i].second * max(0ll, n - spells2[j].second));
    }

    cout << res;

    return 0;
}
