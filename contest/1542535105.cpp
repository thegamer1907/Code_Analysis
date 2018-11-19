#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

string a[120];

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == s) {
            cout <<"YES" << endl;
            return 0;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            string t = a[i] + a[j];
            if (t[1] == s[0] && t[2] == s[1]) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
