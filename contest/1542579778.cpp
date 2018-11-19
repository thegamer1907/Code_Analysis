#include <bits/stdc++.h>
using namespace std;

int n;
int main()
{
    string pass;
    cin >> pass;
    scanf("%d", &n);
    string s[105];
    map<char, vector<pair<int, int> > > m;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        for (int j = 0; j < s[i].size(); j++)
            m[s[i][j]].push_back(make_pair(i, j));
    }
    for (int i = 0; i < pass.size(); i++) {
        char x = pass[i];
        bool meh = 0;
        for (int j = 0; j < m[x].size(); j++) {
            bool ok = 1;
            int a = m[x][j].first, b = m[x][j].second;
            int btta = 0;
            for (int k = b; k >= 0 && (i - btta) >= 0; k--, btta++) {
                if (s[a][k] != pass[i - btta]) {
                    ok = 0;
                    break;
                }
            }
            for (int k = b; k < s[a].size() && (i + k - b) < pass.size(); k++) {
                if (s[a][k] != pass[i + k - b]) {
                    ok = 0;
                    break;
                }
            }
            if (ok)  {
                meh = 1;
                break;
            }
        }
        if (!meh) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
