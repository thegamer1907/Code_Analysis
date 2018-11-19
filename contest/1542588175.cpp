#include <bits/stdc++.h>

using namespace std;

int main()
{
    #ifdef DEBUG
    freopen("input.txt", "r", stdin);
    #endif
    ios_base::sync_with_stdio(0), cin.tie(0);
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = (h * 5) % 60;
    t1 = (t1 * 5) % 60;
    t2 = (t2 * 5) % 60;
    if (t2 < t1) t2 += 60;
    if (m < t1) m += 60;
    if (s < t1) s += 60;
    if (h < t1) h += 60;
    if (t2 <= m && t2 <= s && t2 <= h){
        cout << "YES\n";
        return 0;
    }
    m %= 60;
    t2 %= 60;
    s %= 60;
    h %= 60;
    swap(t1, t2);
    if (t2 < t1) t2 += 60;
    if (m < t1) m += 60;
    if (s < t1) s += 60;
    if (h < t1) h += 60;
    if (t2 <= m && t2 <= s && t2 <= h){
        cout << "YES\n";
        return 0;
    }
    cout << "NO\n";
    return 0;
}

