#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    string a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        string ss = a[i];
        for (int j = i; j > -1; j--) {
            ss += a[j];
            if (ss.find(s) != -1) {
                cout << "YES";
                return 0;
            }
            ss = a[i];
            ss = a[j] + ss;
            if (ss.find(s) != -1) {
                cout << "YES";
                return 0;
            }
            ss = a[i];
        }
    }

    cout << "NO";

    return 0;
}
