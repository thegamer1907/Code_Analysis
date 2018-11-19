#include<iostream>
#include<cstdint>
#include<map>
#include<set>
#include<vector>
#include<algorithm>

#define ll long long

using namespace std;

int main()
{
    double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if(h == 12)
        h = 0;
    if(t1 == 12)
        t1 = 0;
    if(t2 == 12)
        t2 = 0;
    m += s / 60;
    h *= 5;
    h += m / 60;
    t1 *= 5;
    t2 *= 5;
    bool u1 = false, u2 = false, u3 = false;
    if((t1 >= h && t2 >= h) || (t1 <= h && t2 <= h))
        u1 = true;
    if((t1 >= m && t2 >= m) || (t1 <= m && t2 <= m))
        u2 = true;
    if((t1 >= s && t2 >= s) || (t1 <= s && t2 <= s))
        u3 = true;
    if((u1 && u2 && u3) || (!u1 && !u2 && !u3))
        cout << "YES";
    else
        cout << "NO";
    cout << "\n";
    return 0;
}

