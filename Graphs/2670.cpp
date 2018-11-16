#include <bits/stdc++.h>
#ifdef DEBUG
#include "_debug.cpp"
#include "callable.hpp/callable.hpp"
#endif
#define endl '\n'
using namespace std;
using ll = long long;
struct tube {
    deque<int> x;
    deque<int> y;
};
tube make_snake(int row_start, int row_end, int col_start, int col_end) {
    deque<int> x, y;
    for(int row = row_start; row <= row_end; row++) {
        for(int col = row % 2 ? col_start : col_end; row % 2 ? col <= col_end : col >= col_start; row % 2 ? col++ : col--) {
            x.push_back(row);
            y.push_back(col);
        }
    }
    return {x, y};
}
#define N 300
int cnt[N+1][N+1] = {};
bool verify(int n, int m, vector<tube>& ans) {
    for(tube& t : ans) {
        for(int i = 0; i < t.x.size(); i++) {
            cnt[t.x[i]][t.y[i]]++;
        }
    }
    bool can = true;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            can &= cnt[i][j] == 1;
        }
    }
    return can;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, k;
    cin >> n >> m >> k;
    tube s = make_snake(1, n, 1, m);
    vector<tube> ans;
    for(int i = 1; i <= k - 1; i++) {
        tube t;
        t.x.push_back(s.x.front()); s.x.pop_front();
        t.y.push_back(s.y.front()); s.y.pop_front();
        t.x.push_back(s.x.front()); s.x.pop_front();
        t.y.push_back(s.y.front()); s.y.pop_front();
        ans.push_back(t);
    }
    if(not s.x.empty()) {
        ans.push_back(s);
    }
    for(tube& t : ans) {
        cout << t.x.size();
        for(int i = 0; i < t.x.size(); i++) {
            cout << " " << t.x[i] << " " << t.y[i];
        }
        cout << endl;
    }
    assert(ans.size() == k);
    assert(verify(n, m, ans));
    return 0;
}
