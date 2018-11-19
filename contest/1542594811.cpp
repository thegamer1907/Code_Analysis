#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#define ll long long int
#define mod 1000000007
#define pii pair<int, int>
#define fr(n) for (int i = 0; i < n; i++)
#define fr1(n) for (int i = 1; i <= n; i++)
using namespace std;

int main() {
    string s, t[102] = {};
    int n;
    bool a = 0, b = 0;
    cin >> s >> n;
    fr(n) cin >> t[i];
    fr(n) if (t[i] == s) {
        cout << "YES";
        return 0;
    }
    fr(n) if (t[i][0] == s[1]) a = 1;
    fr(n) if (t[i][1] == s[0]) b = 1;
    if (a & b) cout << "YES";
    else cout << "NO";
}
