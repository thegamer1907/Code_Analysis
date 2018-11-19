#include <bits/stdc++.h>

using namespace std;

int t1, t2, h, m, s, f1, f2, max1, min1;
int time1[60 * 60 * 60 + 10];

int main()
{
    cin >> h >> m >> s >> t1 >> t2;
    time1[s * 60 * 60] = 1;
    time1[(m * 60 * 60 + s * 60) % (60 * 60 * 60)] = 1;
    time1[(h * 5 * 60 * 60 + m * 60 + s) % (60 * 60 * 60)] = 1;
    max1 = max((t1 * 5 * 60 * 60) % (60 * 60 * 60), (t2 * 5 * 60 * 60) % (60 * 60 * 60));
    min1 = min((t1 * 5 * 60 * 60) % (60 * 60 * 60), (t2 * 5 * 60 * 60) % (60 * 60 * 60));
    for (int i = min1; i <= max1 ; i++)
    {
        if (time1[i] == 1)
        {
            f1 = 1;
            break;
        }
    }
    int i = max1;
    while (i != min1)
    {
        if (time1[i] == 1)
        {
            f2 = 1;
            break;
        }
        i = (i + 1) % (60 * 60 * 60);
    }
    if (f1 == 0 || f2 == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
