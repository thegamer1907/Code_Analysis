#include <bits/stdc++.h>
using namespace std;

int main(){
    char a, b; cin >> a >> b;
    int n; cin >> n;
    bool b1 = false, b2 = false;
    vector<pair<char, char>> arr(n);
    for (auto& x : arr) cin >> x.first >> x.second;
    for (auto& x : arr) if (x.first == a && x.second == b) b1 = b2 = true;
    for (auto& x : arr) if (x.first == b) b2 = true;
    for (auto& x : arr) if (x.second == a) b1 = true;
    cout << (b1 && b2 ? "YES" : "NO") << endl;
    return 0;
}
