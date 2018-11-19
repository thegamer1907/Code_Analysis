#include <bits/stdc++.h>

using namespace std;

#define SIZ 15

int n, m, a, b;
string s[210];
string l[210], r[210];
set < string > app[210][SIZ+1];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];

        l[i] = ""; r[i] = "";
        for (int j = 0; j < min(SIZ, (int)s[i].size()); j++)
            l[i] += s[i][j];
        for (int j = max(0, (int)s[i].size()-SIZ); j < s[i].size(); j++)
            r[i] += s[i][j];

        for (int j = 0; j < s[i].size(); j++) {
            string val = "";
            for (int k = j; k < s[i].size(); k++) {
                if (k - j + 1 > SIZ) break;
                val += s[i][k];
                app[i][(int)val.size()].insert(val);
            }
        }
    }

    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        a--; b--;

        for (int j = 0; j <= SIZ; j++)
            for (auto v : app[a][j])
                app[n + i][j].insert(v);
        for (int j = 0; j <= SIZ; j++)
            for (auto v : app[b][j])
                app[n + i][j].insert(v);

        string aux = r[a];
        aux += l[b];
        for (int j = 0; j < aux.size(); j++) {
            string val = "";
            for (int k = j; k < aux.size(); k++) {
                if (k - j + 1 > SIZ) break;
                val += aux[k];
                app[n + i][(int)val.size()].insert(val);
            }
        }

        int k = 0;
        for (int j = 1; j <= SIZ; j++) {
            if (app[n+i][j].size() == (1 << j)) k = j;
        }
        printf("%d\n", k);

        if (l[a].size() >= SIZ) l[n+i] = l[a];
        else {
            string xx = l[a];
            for (int j = 0; j < l[b].size(); j++)
                if (xx.size() < SIZ)
                    xx += l[b][j];
            l[n+i] = xx;
        }
        if (r[b].size() >= SIZ) r[n+i] = r[b];
        else {
            string xx = r[a];
            xx += r[b];
            r[n+i] = "";
            for (int j = max(0, (int)xx.size()-SIZ); j < xx.size(); j++)
                r[n+i] += xx[j];
        }
    }

    return 0;
}