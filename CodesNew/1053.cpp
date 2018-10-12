#include <iostream>
#include <set>

using namespace std;
set<string> p;

int main() {
    int n, m, c = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        p.insert(s);
    }
    for (int i = 0; i < m; ++i) {
        string s;
        cin >> s;
        if (p.find(s) != p.end()) {
            c++;
        }
    }
    cout << (n + c % 2 > m ? "YES\n" : "NO\n") << endl;
    return 0;
}
