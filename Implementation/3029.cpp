#include <random>
#include <vector>
#include <cstdio>
#include <iostream>
#include <tuple>
#include <stdexcept>
#include <map>
#include <set>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstring>
#include <deque>
#include <numeric>
#include <unordered_map>
#include <bitset>
#include <queue>

#define pb push_back
#define F first
#define S second
using namespace std;
typedef long long ll;
#define mod ll(1e9 + 7)
#define mp make_pair
#define pb push_back
#define sqr(xx) ((xx)*(xx))
#define sz int(1e6)

int n, f = 1;
string s[sz];
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
        for (int j = 0; j < 4; j++) {
            if (f && s[i][j] == s[i][j + 1] && s[i][j] == 'O') {
                f = 0;
                s[i][j] = '+';
                s[i][j + 1] = '+';
            }
        }
    }
    if (f) {
        cout << "NO";
        return 0;
    }
    cout << "YES\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 5; j++) {
            cout << s[i][j];
        }
        cout << "\n";
    }

}