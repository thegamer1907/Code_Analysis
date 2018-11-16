#include <iostream>
#include <vector>

using namespace std;

vector<int> ab;
vector<int> ba;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            ab.push_back(i);
        }
        if (s[i] == 'B' && s[i + 1] == 'A') {
            ba.push_back(i);
        }
    }
    if (ab.size() * ba.size() == 0) {
        cout << "NO";
        return 0;
    }
    if (abs(ab[0] - ba.back()) > 1 || abs(ba[0] - ab.back()) > 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
