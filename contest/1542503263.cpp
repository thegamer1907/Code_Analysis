#include <bits/stdc++.h>

using namespace std;

int const N = 205;
int const NN = 11;

int ans[N], n;

bitset < 1 << NN > a[N][NN];
string last[N], first[N], s[N];

void add (int index, string s) {
    for (int i = 0; i < s.size(); i++) {
        int val = 0;
        for (int j = i; j < min((int)s.size(), i + NN); j++) {
            val = val * 2 + (s[j] - '0');
            a[index][j-i+1][val] = 1;
        }
    }

    while(1) {
        for (int mask = 0; mask < (1 << (ans[index] + 1)); mask++) {
            if (a[index][ans[index]+1][mask] == 0) {
                return;
            }
        }
        ans[index]++;
    }
}

int main()
{
   // freopen("inp.txt", "r", stdin);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        if (s[i].size() < NN) {
            last[i] = first[i] = s[i];
        }
        else {
            last[i] = s[i].substr(s[i].size() - NN, NN);
            first[i] = s[i].substr(0, NN);
        }

        add(i, s[i]);
    }

    int m;

    cin >> m;

    for (int i = n + 1; i <= n + m; i++) {
        int u, v;
        cin >> u >> v;
        if (last[v].size() < NN) {
            int rest = min (NN - last[v].size(), last[u].size());
            last[i] = last[u].substr(last[u].size()-rest, rest) + last[v];
        }
        else {
            last[i] = last[v];
        }


        if (first[u].size() < NN) {
            int rest = min (NN - first[u].size(), first[v].size());
            first[i] = first[u] + first[v].substr(0, rest);
        }
        else {
            first[i] = first[u];
        }

        for (int j = 1; j < NN; j++)
            a[i][j] = a[u][j] | a[v][j];
        ans[i] = max(ans[u], ans[v]);

        string newStr = last[u] + first[v];
        add(i, newStr);
        cout << ans[i] << endl;
    }




}
