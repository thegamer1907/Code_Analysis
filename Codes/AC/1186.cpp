#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <set>
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    set <string> words;
    int uniqueP = 0, uniqueV = 0, both = 0;

    int n, m;
    cin >> n >> m;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s;

        words.insert(s);
        ++uniqueP;
    }

    for (int i = 0; i < m; ++i) {
        cin >> s;

        if (words.find(s) != words.end()) {
            ++both;
            --uniqueP;
        }
        else {
            ++uniqueV;
        }
    }

    //cerr << uniqueP << " " << uniqueV << " " << both << endl;

    if (uniqueP > uniqueV) {
        cout << "YES";
    }
    else if (uniqueP < uniqueV) {
        cout << "NO";
    }
    else {
        cout << (both % 2 == 0 ? "NO" : "YES");
    }

	return 0;
}
