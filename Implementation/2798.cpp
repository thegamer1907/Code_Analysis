#include <bits/stdc++.h>
#define err(args...) {}
#ifdef DEBUG
#include "_debug.cpp"
#include "callable.hpp/callable.hpp"
#endif
#define endl '\n'
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int upper = 0, lower = 0;
    for(char c : s) {
        lower += 'a' <= c and c <= 'z';
        upper += 'A' <= c and c <= 'Z';
    }
    for(char c : s) {
        cout << char(upper > lower ? toupper(c) : tolower(c));
    }
    cout << endl;
    return 0;
}
