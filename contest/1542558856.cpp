#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#pragma GCC diagnostic ignored "-Wmissing-declarations"
#define FINAL_OUT(x) {cout << (x) << '\n'; exit(0);}



int main()
{
//    freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false);

    int h,m,s,t1,t2;
    cin >> h >> m >> s >> t1 >> t2;

    if (t1 > t2) swap(t1, t2);

    int cnt = 0;
    cnt += h >= t1 && h < t2;
    cnt += m >= t1 * 5 && m < t2 * 5;
    cnt += s >= t1 * 5 && s < t2 * 5;
    cout << (cnt == 3 || cnt == 0 ? "YES\n" : "NO\n");
}
