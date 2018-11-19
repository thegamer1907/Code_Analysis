#include <algorithm>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <cmath>
#include <map>
#include <set>
#define pb push_back
#define MS(x, y) memset(x, y, sizeof(x))
#define FILER freopen("data.in", "r", stdin)
#define FILEW freopen("data.out", "w", stdout)
using namespace std;
typedef long long LL;

string s[200];
string pw;
bool check(int n) {
    for (int i = 1; i <= n; i ++) {
        if (s[i] == pw) return true;
        for (int j = 1; j <= n; j ++) {
            if (pw[0] == s[i][s[i].size()-1] && pw[pw.size()-1] == s[j][0]) {
                return true;
            }
        }
    }
    return false;
}
    
int main() {
    cin >> pw;
    int n; cin >> n;
    for (int i = 1; i <= n; i ++) cin >> s[i];
    if (check(n)) cout << "YES\n";
    else cout << "NO\n";
}
