#include <bits/stdc++.h>

using namespace std;
int h, m, s, t1, t2, nguoc, xuoi;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
   // freopen("inp.txt","r",stdin);
    cin >> h >> m >> s >> t1 >> t2;
    h = h % 12;
    t1 = t1 % 12;
    t2 = t2 % 12;
    h = h * 3600 + m * 60 + s;
    m = m * 720 + s * 12;
    s = s * 720;
    if (t1 > t2) swap(t1,t2);
    t1 = t1 * 3600;
    t2 = t2 * 3600;
    nguoc = 0;
    xuoi = 0;
    if (t1 <= t2)
    {
        for (int i = t1; i <= t2; i++)
            if (i == h || i == m || i == s)
            {
                xuoi++;
                break;
            }
        for (int i = t2; i <= t1 + 3600 * 12; i++)
        {
            int xxx = i % 43200;
            if (xxx == h || xxx == m || xxx == s)
            {
                nguoc++;
                break;
            }
        }
    }
    if (nguoc + xuoi == 2 && nguoc >= 1 && xuoi >= 1) {cout << "NO"; exit(0);}
    cout << "YES";
}