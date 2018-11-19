#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    double h, m, s, t1, t2, mnt, mxt, ans = 0;
    cin >> h >> m >> s >> t1 >> t2;
    h = h * 5;
    m += s / 60;
	h += m / 60;
    t1 *= 5;
    t2 *= 5;
    mnt = min(t1, t2);
    mxt = max(t1, t2);
    if(mnt < h && h < mxt) ans ++;
	if(mnt < m && m < mxt) ans ++;
	if(mnt < s && s < mxt) ans ++;
    if( ans == 3 || ans == 0) cout << "YES";
    else
        cout << "NO";
    return 0;
}
