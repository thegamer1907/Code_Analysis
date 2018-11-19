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
map < int, int > d;

bool f(int q, vector < int > ans, int n, int k) {
    //for (pair < int, int > key : d) cout << key.first << ' ' << key.second << endl;
    //for (int i = 0; i < k; i++) cout << ans[i] << ' ';
    //cout << endl;
    //cout << endl;
    if (q != 0) {
        bool fr = true;
        for (int i = 0; i < k; i++) {
            if (ans[i] * 2 > q) {
                fr = false;
                break;
            }
        }
        if (fr) return true;
    }
    if (q == 4) return false;
    bool fr = false;
    for (pair < int, int > key : d) {
        if (key.second != 0) {
            d[key.first]--;
            vector < int > L;
            int g = key.first;
            while (g != 0) {
                L.push_back(g % 2);
                g = g / 2;
            }
            while (L.size() < k) L.push_back(0);
            vector < int > l;
            for (int i = 0; i < k; i++) l.push_back(0);
            for (int i = 0; i < k; i++) l[i] = L[k - i - 1];
            for (int i = 0; i < k; i++) l[i] += ans[i];
            fr = fr || f(q + 1, l, n, k);
            d[key.first]++;
        }
    }
    return fr;
}

main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        vector < bool > s;
        for (int j = 0; j < k; j++) {
            bool e;
            cin >> e;
            s.push_back(e);
        }
        int w = 0;
        int st = 1;
        for (int j = s.size() - 1; j >= 0; j--) {
            w += st * s[j];
            st *= 2;
        }
        if (d.find(w) == d.end()) d[w] = 1;
        else d[w]++;
    }
    vector < int > fa;
    for (int i = 0; i < k; i++) fa.push_back(0);
    if (f(0, fa, n, k)) cout << "YES";
    else cout << "NO";
    return 0;
}
