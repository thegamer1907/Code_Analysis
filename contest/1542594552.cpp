#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>
#include <queue>
#include <cmath>
#include <fstream>
#include <stdlib.h>
#include <ctime>

using namespace std;
#define llg long long
const int MAXN = 1e5 + 2;
const int inf = 1e9 + 7;
const string ABC = "0123456789";


main() {
    char c1, c2;
    cin >> c1 >> c2;
    int n;
    cin >> n;
    pair < char, char > d[MAXN];
    for (int i = 0; i < n; i++) {
        cin >> d[i].first >> d[i].second;
        if (d[i].first == c1 && d[i].second == c2) {
            cout << "YES";
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (d[i].second == c1 && d[j].first == c2) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
