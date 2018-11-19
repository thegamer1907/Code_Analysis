// /contest/868/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int mod = 1000000007;

inline int add(int a, int b) { if ((a+=b) >= mod) return a-mod; else return a; }
inline int mul(int a, int b) { return LL(a) * b % mod; }
inline int sub(int a, int b) { if ((a-=b) < 0) return a+mod; else return a; }
int power(int a, int b) { int r = 1; while (b) { if (b&1) r = mul(r, a); a = mul(a, a); b >>= 1; } return r; }

int main() {
    int n;
    string pw;
    cin >> pw;
    vector<string> ds;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        ds.push_back(s);
        if (s == pw) {
            cout << "YES"; return 0;
        }
    }
    for (auto &s1 : ds)
    for (auto &s2 : ds)
        if (s1[1] == pw[0] && s2[0] == pw[1]) {
            cout << "YES"; return 0;
        } 

    cout << "NO";
}