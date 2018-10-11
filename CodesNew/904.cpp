#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,m;
    vector <string> p,w;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        string t;
        cin >> t;
        p.push_back(t);
    }
    int paw = 0;
    for (int i = 0; i < m; ++i) {
        string t;
        cin >> t;
        for (int j = 0; j < p.size(); ++j) {
            if (t == p[j]) {
                ++paw;
            }
        }
    }
    n -= paw;
    m -= paw;
    if (paw % 2 == 1)
        n >= m ? cout << "YES" : cout << "NO";
    else
        n > m ? cout << "YES" : cout << "NO";
    return 0;
}
