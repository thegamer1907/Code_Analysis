#include <bits/stdc++.h>

using namespace std;

const int S = 13;

int d[200][S + 1][(1 << S)];
int k[200][S + 1];
int maxa[200];
string ls[200];
string fs[200];

int main() {
    for (int i = 0; i < 200 ;i++) {
        ls[i] = "";
        fs[i] = "";
    }
    int n;
    string s;
    cin >> n;
    for (int i1 = 0; i1 < n; i1++) {
        cin >> s;
        for (int l = 1; l <= S; l++) {
            for (int i = 0; i < (int)s.size() - l + 1; i++) {
                int mask = 0;
                for (int j = i; j < i + l; j++) {
                    if (s[j] == '1') {
                        mask = mask | (1 << (j - i));
                    }
                }
                bool g = d[i1][l][mask];
                d[i1][l][mask] = true;
                if (g != d[i1][l][mask]) {
                    k[i1][l]++;
                    if (k[i1][l] == (1 << l)) {
                        maxa[i1] = max(maxa[i1], l);
                    }
                }
            }
        }
        for (int i = max(0, (int)s.size() - S); i < s.size(); i++) {
            ls[i1] += s[i];
        }
        for (int i = 0; i < min(int(s.size()), S); i++) {
            fs[i1] += s[i];
        }
    }
    int m;
    cin >> m;
    for (int i1 = 0; i1 < m; i1++) {
        int ai, aj;
        cin >> ai >> aj;
        ai--;
        aj--;
        s = ls[ai] + fs[aj];
        //cout << s << "\n";
        for (int l = 1; l <= S; l++) {
            for (int i = 0; i < (1 << S); i++) {
                d[i1 + n][l][i] = (d[ai][l][i] | d[aj][l][i]);
                if (d[i1 + n][l][i] == 1) {
                    k[i1 + n][l]++;
                    if (k[i1 + n][l] == (1 << l)) {
                        maxa[i1 + n] = max(maxa[i1 + n], l);
                    }
                }
            }
        }
        //cout << maxa[i1 + n] << "\n";
        for (int l = 1; l <= S; l++) {
            for (int i = 0; i < (int)s.size() - l + 1; i++) {
                int mask = 0;
                for (int j = i; j < i + l; j++) {
                    if (s[j] == '1') {
                        mask = mask | (1 << (j - i));
                    }
                }
                bool g = d[i1 + n][l][mask];
                d[i1 + n][l][mask] = true;
                if (g != d[i1 + n][l][mask]) {
                    k[i1 + n][l]++;
                    if (k[i1 + n][l] == (1 << l)) {
                        maxa[i1 + n] = max(maxa[i1 + n], l);
                    }
                }
            }
        }
        cout << maxa[i1 + n] << "\n";
        fs[i1 + n] = fs[ai];
        int j = 0;
        while (fs[i1 + n].size() < S) {
            fs[i1 + n] += fs[aj][j];
            j++;
            if (j >= fs[aj].size()) {
                break;
            }
        }
        ls[i1 + n] = "";
        int t = S - int(ls[aj].size());
        j = max(0, int(ls[ai].size()) - t);
        while (j < ls[ai].size()) {
            ls[i1 + n] += ls[ai][j];
            j++;
        }
        ls[i1 + n] += ls[aj];
        //cout << fs[i1 + n] << "|" << ls[i1 + n] << "\n";
    }
    return 0;
}
