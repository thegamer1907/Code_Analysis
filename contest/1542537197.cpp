#include <iostream>

using namespace std;

string _s, s;

int main()
{
    int n;
    bool chest1 = 0, chest2 = 0;
    cin >> s >> n;
    for (int i = 0; i < n; ++i) {
        cin >> _s;
        if (_s[0] == s[1]) {
            chest1 = true;
        }
        if (_s[1] == s[0]) {
            chest2 = true;
        }
        if (_s == s) {
            cout << "YES";
            return 0;
        }
    }
    if (chest1 == 1 && chest2 == 1) {
        cout << "YES";
        return 0;
    }
    cout <<"NO";
    return 0;
}
