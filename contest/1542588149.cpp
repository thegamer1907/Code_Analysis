#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <vector>
using namespace std;
typedef long long LL;
const int maxn = 1e3 + 7;
string a[maxn];
int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    string str;
    while (cin >> str) {
        int n;
        cin >> n;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == str) {
                flag = 1;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                string cur = "";
                cur += a[i][1];
                cur += a[j][0];
                if (cur == str)
                    flag = 1;
            }
        }
        if (flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}