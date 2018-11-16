#include <bits/stdc++.h>
using namespace std;


namespace Hash {
using ULL = unsigned long long;
ULL p1(131), p2(1313);
int n = 0;
vector<ULL> H[4];
template <typename T> void init(const T& S) {
    n = S.size();
    for (int i = 0; i < 4; i++) H[i].assign(n + 1, 0ULL);
    H[2][0] = H[3][0] = 1;
    for (int i = 1; i < n; i++) H[2][i] = H[2][i - 1] * p1, H[3][i] = H[3][i - 1] * p2;
    for (int i = n - 1; i >= 0; i--)
        H[0][i] = H[0][i + 1] * p1 + S[i], H[1][i] = H[1][i + 1] * p2 + S[i];
}
pair<ULL, ULL> get(int l, int r) {
    return {
        H[0][l] - H[0][r]* H[2][r - l],
        H[1][l] - H[1][r]* H[3][r - l]
    };
}
}


int main() {
    string s;
    cin >> s;
    Hash::init(s);
    int n = s.size();
    if (n < 3) return puts("Just a legend"), 0;
    for (int len = n - 2; len >= 1; len--) {
        int l = 0, r = n - len;
        auto t = Hash::get(l, l + len), u = Hash::get(r, r + len);
        if (t != u) continue;
        for (int i = l + 1; i < r; i++) {
            if (Hash::get(i, i + len) == t) {
                cout << s.substr(0, len) << endl;
                return 0;
            }
        }
    }
    puts("Just a legend");
    return 0;
}
