#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <cmath>
#include <stdlib.h>
#include <queue>
using namespace std;

int main() {
    vector<int> v[2048];
    queue<int> q[2];
    bool b=0;
    int n, k, lvl=0;

    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> k;
        if (k==-1)
            q[b].emplace(i);
        else
            v[k].push_back(i);
    }
    while (!q[b].empty()) {
        while (!q[b].empty()) {
            int front = q[b].front(); q[b].pop();
            for (auto &i:v[front])
                q[!b].emplace(i);
        }
        b=!b, lvl++;
    }
    cout << lvl << endl;
    return 0;
}