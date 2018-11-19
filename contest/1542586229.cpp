#include <bits/stdc++.h>
using namespace std;

int h, m, s, t1, t2, ans = 0;

int main(){
    ios_base::sync_with_stdio(false);
    cin >> h >> m >> s >> t1 >> t2;
    m *= 3600;
    s *= 3600;
    h = (h%12) * 5 * 3600;
    t1 = (t1%12) * 5 * 3600;
    t2 = (t2%12) * 5 * 3600;

    h += 60 * m / 3600 + s / 3600;
    m += 60 * s / 3600;

    for(int i=t2; i != t1; i++) {
        if(i == h)
            ans++;
        if(i == m)
            ans++;
        if(i == s)
            ans++;
        if(i > 3600 * 3600 * 12)
            i = -1;
    }

    if((ans == 0 || ans == 3) &&
       t1 != h && t1 != m && t1 != s &&
       t2 != h && t2 != m && t2 != s )
        cout << "YES";
    else
        cout << "NO";
}
