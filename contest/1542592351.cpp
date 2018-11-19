#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string ref, it;
    bool l = false, r = false, ret = false;
    cin >> ref;
    cin >> n;
    while (n--) {
        cin >> it;
        if (it[0] == ref[0] && it[1] == ref[1]) {
            ret = true;
            break;
        }
        if (it[0] == ref[1]) {
            l = true;
        }
        if (it[1] == ref[0]) {
            r = true;
        }
    }
    if (ret || (l && r)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}