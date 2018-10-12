#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long n;
    string s, s1;
    cin >> n;
    vector <string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> s;
        s.erase(0, 1);
        v[i] = s;
    }
    for (int i = n - 1; i > 0; i--) {
        if (v[i] < v[i - 1]) {
            long ind = 0;
            for (int j = 0; j < min(v[i - 1].size(), v[i].size()); j++) {
                if (v[i - 1][j] > v[i][j]) {
                    v[i - 1].erase(j);
                    ind = 1;
                    break;
                }
            }
            if (ind == 0)
                v[i - 1].erase(v[i].size());
        }
    }
    for (int i = 0; i < n; i++)
        cout << "#" << v[i] << endl;
}
