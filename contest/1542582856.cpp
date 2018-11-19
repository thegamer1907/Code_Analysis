#include <iostream>

using namespace std;

void add(int &a)
{
    if (a == 59) a = 0;
    else ++a;
}

void multi(int &a)
{
    if (a == 12) a = 0;
    else a *= 5;
}

int main()
{
    int h, m, s, t1, t2;
    bool p = false, tmp[2];
    cin >> h >> m >> s >> t1 >> t2;
    tmp[0] = false;
    tmp[1] = false;
    multi(h);
    multi(t1);
    multi(t2);
    for (int i = t1; i != t2; add(i))
    {
        if (i == h or i == m or i == s)
        {
            tmp[0] = true;
            break;
        }
    }
    for (int i = t2; i != t1; add(i))
    {
        if (i == h or i == m or i == s)
        {
            tmp[1] = true;
            break;
        }
    }
    if (tmp[0] and tmp[1]) cout << "NO";
    else cout << "YES";
}
