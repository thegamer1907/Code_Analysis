#include <iostream>
// problem 266 B
using namespace std;
string s;
int main() {
    int n, T;
    cin >> n >> T;
    cin >> s;
    for (int t = 0; t < T; t++) {
        for (int i = 0; i < s.size() - 1; i++) {
            if (s[i] == 'B' and s[i+1] == 'G') {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }
    cout << s << '\n';
}