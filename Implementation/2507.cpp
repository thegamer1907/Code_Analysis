#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
    #define dbg(...) fprintf(stderr, __VA_ARGS__)
#else
    #define dbg(...)
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    for (char ch : s) {
        if (ch == 'H' || ch == 'Q' || ch == '9') {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}
