#include <bits/stdc++.h>
#define int long long
#define mk make_pair
#define pb push_back
using namespace std;
const int N = 1123456;
const int mod = 1e9 + 7;
const int inf = 1e9 + 7;
int read()
{
    int x;
    scanf("%I64d", &x);
    return x;
}
int a[N];
main()
{
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    int d = 12 * 60 * 60;
    a[h * 60 * 60 * (h != 12) + m * 60 + s] = 1;
    a[m * 12 * 60 + s * 12] = 1;
    a[s * 12 * 60] = 1;
    bool ok = 1;
    int w1 = t1 * 60 * 60 * (t1 != 12), i;
    int w2 = t2 * 60 * 60 * (t2 != 12);
    int dd = w1;
    for(i = 1; i <= 1e5; i ++) {
        dd ++;
        if(dd == d)
            dd = 0;
        if(a[dd])
            break;
        if(dd == w2) {
            puts("YES");
            return 0;
        }
    }
    dd = w1;
    for(i = 1; i <= 1e5; i ++) {
        dd --;
        if(dd == -1)
            dd = d - 1;
        if(a[dd])
            break;
        if(dd == w2) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
}
