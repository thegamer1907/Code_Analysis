#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

vi getAsceding(vector<vi> &a) {
    int n = a.size();
    int m = a[0].size();
    vi res;
    res.reserve(n);
    res.push_back(1);
    vi line(m, 1);
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (a[i][j] >= a[i-1][j]) line[j]++;
            else line[j] = 1;
        auto mx = *max_element(line.begin(), line.end());
       /* for (int j = 0; j < m; j++)
            cerr << line[j] << " ";
        cerr << endl;
        cerr << i << ") " << mx << endl;
        */
        res.push_back(mx);
    }

    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vi> a(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    vi res = getAsceding(a);
    int k;
    cin >> k;
    for (int q = 0; q < k; q++) {
        int l,r;
        cin >> l >> r;
        if (res[r-1] >= r-l+1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }

    return 0;
}