#include <bits/stdc++.h>

#define pb push_back
#define db double
#define int long long
#define all(c) (c).begin(), (c).end()
using namespace std;

const int N = 1e6 + 1;
const int mod = 1e9 + 7;
typedef pair<int, int> pii;

inline int read () {
    char c = getchar();
    int t = 0, f = 1;
    while (!isdigit(c)) f = (c == '-') ? -1 : 1, c = getchar();
    while (isdigit(c)) t = t * 10 + c - 48, c = getchar();
    return t * f;
}
int cntx[300], cnty[300];
main() {
    char x, y;
    cin >> x >> y;
    int n = read();
    for(int i = 1; i <= n; i ++) {
        char q, w;
        cin >> q >> w;
        if(q == x && w == y) {
            puts("YES");
            return 0;
        }
        cntx[q] ++;
        cnty[w] ++;
    }
    if((cntx[y] && cnty[x]))
        puts("YES");
    else
        puts("NO");
}

