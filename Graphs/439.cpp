#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <algorithm>
#include <set>
#include <map>
#include <iomanip>

#define ios ios::sync_with_stdio(false);cin.tie(0);
#define double long double
#define int long long
#define inf (int)1e18
#define endl '\n'

using namespace std;

signed main() { ios
    int n, t; cin >> n >> t;
    string s; cin >> s; s = ' ' + s;
    while (t--)
        for (int i = 1; i < n; ++i) if (s[i] == 'B' && s[i + 1] == 'G') swap(s[i], s[i + 1]), i++;
    cout << s.substr(1, n) << endl;
}









