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

#define spd ios::sync_with_stdio(false);cin.tie(0);
#define double long double
#define int long long
#define inf (int)1e18
#define endl '\n'

using namespace std;

signed main()
{spd
    string s; cin >> s;
    int z = 0, o = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '1') o++, z = 0;
        else z++, o = 0;
        if (o == 7 || z == 7) return cout << "YES" << endl, 0;
    }
    cout << "NO" << endl;
}









