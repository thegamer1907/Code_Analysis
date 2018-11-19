#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string pass;
    cin >> pass;
    int n;
    cin >> n;
    vector<string> w(n);
    for (int i = 0; i < n; ++i) {
        cin >> w[i];
    }
    bool check = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            string s1, s2;
            s1.push_back(w[i][1]);
            s1.push_back(w[j][0]);
            s2.push_back(w[j][1]);
            s2.push_back(w[i][0]);
            if (w[i] == pass || w[j] == pass || s1 == pass || s2 == pass) {
                check = 1;
                break;
                break;
            }
        }
    }
    if (check == 0) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }
}
