#include <iostream>
#include <cstring>
#include <cstdio>
#include <map>

using namespace std;

int n, m, nr;
string cuv;

map <string , int> mp;

int main() {
    #ifndef ONLINE_JUDGE
        freopen ("inpu.txt", "r", stdin);
    #endif // ONLINE_JUDGE

    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> cuv;
        ++mp[cuv];
    }

    for (int i = 1; i <= m; ++i) {
        cin >> cuv;
        if (mp[cuv] != 0) {
            ++nr;
        }

        ++mp[cuv];
    }

    if (n + nr % 2 > m)
        cout << "YES";

    else
        cout << "NO";
    return 0;
}