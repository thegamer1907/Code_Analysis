#include<bits/stdc++.h>

#define ll long long
#define sz(x) (ll)(x.size())
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    vector<ll> ab, ba;
    size_t AB = -1, BA = -1;
    do {
        AB = s.find("AB", AB + 1);
        if (AB != string::npos) {
            ab.push_back(AB);
        }
    } while (AB != string::npos);
    do {
        BA = s.find("BA", BA + 1);
        if (BA != string::npos) {
            ba.push_back(BA);
        }
    } while (BA != string::npos);
    if (sz(ba) == 0 || sz(ab) == 0) {
        cout << "NO";
    } else if (sz(ab) == 1 && sz(ba) == 1 && abs(ba[0] - ab[0]) == 1) {
        cout << "NO";
    } else if (sz(ab) == 2 && sz(ba) == 1 && ab[0] + 1 == ba[0] && ba[0] + 1 == ab[1]) {
        cout << "NO";
    } else if (sz(ba) == 2 && sz(ab) == 1 && ba[0] + 1 == ab[0] && ab[0] + 1 == ba[1]) {
        cout << "NO";
    } else {
        cout << "YES";
    }
}