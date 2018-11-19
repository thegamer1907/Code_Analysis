#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string need;
    cin >> need;

    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n ; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            string temp = v[i] + v[j];
            for (int t = 0; t < 3; t++) {
                if (temp[t] == need[0] && temp[t+1]==need[1]) {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO\n";
    return 0;
}
