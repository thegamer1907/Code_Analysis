#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int k;

void work() {
    scanf("%d", &k);
    queue<vector<int> > que;
    vector<int> vec;
    vec.push_back(0);
    que.push(vec);
    int cnt = 0;
    while (!que.empty()) {
        vector<int> u = que.front();
        que.pop();
        int s = 0;
        for (int i = 0; i < u.size(); ++i) s += u[i];
        if (s > 0 && s == 10) {
            cnt ++;
        }
        if (cnt == k) {
            for (int i = 1; i < u.size(); ++i) printf("%d", u[i]);
            puts("");
            return ;
        }
        for (int i = 0; i < 10; ++i) {
            if (i == 0 && s == 0 || s + i > 10) {
                continue;
            }
            vector<int> v = u;
            v.push_back(i);
            que.push(v);
        }
    }
    return ;
}

int main() {
    work();
    return 0;
}
