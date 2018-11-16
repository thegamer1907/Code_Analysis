#include <bits/stdc++.h>

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif

    string s;
    cin >> s;

    vector<string> res;
    for(int i = 0; i < 10; ++i) {
        string cur = s;
        for(int j = 0; j < s.size(); ++j) {
            if (s[j] > '0') {
                cur[j] = '1';
                s[j]--;
            } else {
                cur[j] = '0';
            }
        }

        int k = 0;
        while(cur[k] == '0')
            k++;
        if(k == s.size())
            break;
        res.push_back(cur.substr(k));
    }
    cout << res.size() << "\n";
    for(string s : res) {
        cout << s << " ";
    }
}