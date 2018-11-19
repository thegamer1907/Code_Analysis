#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false);

    int h, m, s;
    int A, B;
    cin >> h >> m >> s;
    cin >> A >> B;
    h %= 12;
    A %= 12;
    B %= 12;
    bool c = 1, cc = 1;
    {
        bool found = false;
        for (int i = A; i != B; i = (i+1) % 12)
            if (i == h)
            {
                found = true;
                c = 0;
            }
        if (!found)
            cc = 0;
    }
    {
        bool found = false;
        for (int i = A * 5; i != B * 5; i = (i+1) % 60)
            if (i == m)
            {
                found = true;
                c = 0;
            }
        if (!found)
            cc = 0;
    }
    {
        bool found = false;
        for (int i = A * 5; i != B * 5; i = (i+1) % 60)
            if (i == s)
            {
                found = true;
                c = 0;
            }
        if (!found)
            cc = 0;
    }
    if (c || cc)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
