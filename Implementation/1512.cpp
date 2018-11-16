#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int i = 0;
    char prevc = '-';
    for (char &c : s) {
        if (prevc == '-' || prevc == c)
            i++;
        else i = 1;
        if (i == 7) {
            cout << "YES";
            return 0;
        }
        prevc = c;
    }
    cout << "NO";
	return 0;
}
