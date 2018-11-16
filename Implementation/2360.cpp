#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
    #define dbg(...) fprintf(stderr, __VA_ARGS__)
#else
    #define dbg(...)
#endif

bool check(long long cnt)
{
    if (!cnt) return false;
    while (cnt) {
        int x = cnt % 10;
        if (x != 4 && x != 7)
            return false;
        cnt /= 10;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int cnt = 0;
    string s;
    cin >> s;
    for (auto ch : s) {
        if (ch == '4' || ch == '7')
            cnt++;
    }
    if (check(cnt)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
