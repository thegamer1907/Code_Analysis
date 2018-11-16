#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <iomanip>
#include <stack>
#include <queue>
#include <algorithm>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
    ios::sync_with_stdio(false);

    int n, a, b;
    cin >> n >> a >> b;
    a--, b--;

    vector<int> v(n, 0);
    v[a] = v[b] = 1;

    int p = 0;
    int n_ = n;
    while(n_ > 1) {
        p++;
        n_ /= 2;
    }

    int cnt = 0;
    while(v.size() >= 2) {
        vector<int> now;
        for(int i = 0; i < n; i += 2) {
            if(v[i] == 1 && v[i + 1] == 1) {
                if(cnt + 1 == p) {
                    cout << "Final!\n";
                    return 0;
                }
                cout << cnt + 1 << endl;
                return 0;
            }
            now.push_back(max(v[i], v[i + 1]));
        }
        v = now;
        cnt++;
    }

    return 0;
}
