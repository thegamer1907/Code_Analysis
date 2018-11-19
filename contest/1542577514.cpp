#include <iostream>
#include <cmath>
using namespace std;

const int MAGIC = 18;
const int SZ = 1048576; // 2 ^ 18

int n, m;
bool dp[203][1048576];
string s[203];
string start[203];
string qend[203];

void updateValue(int i, int j, int k) {
    int mult = 1;
    for (int l = j; l <= k; ++l) {
        mult = mult * 2 + (s[i][l] - '0');
        if (mult >= SZ) {
            break;
        }
    }
    if (mult < SZ) {
        dp[i][mult] = true;
    }
}

int getValue(int i) {
    int k = 0;
    int z = 1;
    while (true) {
        z*=2;
        for (int j = 0; j < z; ++j) {
            if (j + z >= SZ) {
                return k;
            }
            if (!dp[i][j+z]) {
                return k;
            }
        }
        k++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < 200; ++i) {
        for (int j = 0; j < SZ; ++j) {
            dp[i][j] = false;
        }
    }
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        for (int j = 0; j < s[i].size(); ++j) {
            start[i].push_back(s[i][j]);
            qend[i].push_back(s[i][j]);
        }

        for (int j = 0; j < s[i].size(); ++j) {
            for (int k = j; k < s[i].size(); ++k) {
                if (k - j >= 20) {
                    continue;
                }
                updateValue(i, j, k);
            }
        }
    }
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        start[i + n] = start[a];
        qend[i + n] = qend[b];
        if (s[a].size() >= 20) {
            for (int j = int(qend[a].size()) - 20; j < qend[a].size(); ++j) {
                s[i + n].push_back(qend[a][j]);
            }
        } else {
            for (int j = 0; j < qend[a].size(); ++j) {
                s[i + n].push_back(qend[a][j]);
            }
        }
        for (int j = 0; j < min(20, int(start[b].size())); ++j) {
            s[i+n].push_back(start[b][j]);
        }
        for (int j = 0; j < SZ; ++j) {
            dp[i + n][j] = dp[a][j] || dp[b][j];
        }
        if (start[i + n].size() < 20) {
            start[i + n] = s[i + n];
        }
        if (qend[i + n].size() < 20) {
            qend[i + n] = s[i + n];
        }
        for (int j = 0; j < s[i + n].size(); ++j) {
            for (int k = j; k < s[i + n].size(); ++k) {
                if (k - j >= 20) {
                    continue;
                }
                updateValue(i + n, j, k);
            }
        }
        cout << getValue(i + n) << endl;
    }
    return 0;
}