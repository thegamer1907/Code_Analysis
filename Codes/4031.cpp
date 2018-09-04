#include <bits/stdc++.h>

using namespace std;
const int N = (int)3e5 + 228;

void apply_row(vector<vector<int> > &g, vector<int> &cnt, int i, int d) {
    if (i == 0)
        return;
    
    for (int j = 0; j < g[i].size(); j++) {
        if (g[i - 1][j] <= g[i][j])
            cnt[j] += d;
    }
}

bool check(const vector<int> &cnt, int z) {
    bool ans = false;
    for (int e : cnt) {
        if (e >= z)
            ans = true;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
 
    int n, m;
    cin >> n >> m;
    
    vector<vector<int> > g(n);
    
    for (auto &row : g) {
        row.resize(m);
        for (auto &e : row) {
            cin >> e;
        }
    }
    
    vector<int> dp(n);
    vector<int> cnt(m, 0);
    
    int l = 0;
    int r = 0;
    
    while (l < n) {
        while (r < n - 1) {
            r++;
            apply_row(g, cnt, r, +1);
            if (!check(cnt, r - l)) {
                apply_row(g, cnt, r, -1);
                r--;
                break;
            }
        }
        
        dp[l] = r;
        
//        cout << "lol " << l << " " << r << endl;
//        for (int i : cnt) {
//            cout << i << " ";
//        }
//        cout << endl << endl;
        
        l++;
        if (l < n)
            apply_row(g, cnt, l, -1);
        //cout << "ok " << l << "\n";
    }
    
    int q;
    cin >> q;
    
    while (q--) {
        cin >> l >> r;
        l--;
        r--;
        
        if (dp[l] >= r)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    
    return 0;
}