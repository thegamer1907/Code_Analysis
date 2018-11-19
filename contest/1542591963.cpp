#include <bits/stdc++.h>

using namespace std;

int main() {
    string pass;
    cin >> pass;
    int n;
    bool flag = false, first = false, second = false;
    cin >> n;
    vector<string> barks;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        barks.push_back(tmp);
        if (tmp == pass) {
            flag = true;
        }
        if (tmp[0] == pass[1]) {
            second = true;
        }
        if (tmp[1] == pass[0]) {
            first = true;
        }
    }
    flag |= (first && second);
    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}
