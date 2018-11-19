#include <iostream>

using namespace std;

int main()
{
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h = (h * 5) % 60;
    t1 = (t1 * 5) % 60;
    t2 = (t2 * 5) % 60;
    int i = 0;
    while (i < 60)
    {
        if ((t1 + i) % 60 == t2)
        {
            cout << "YES";
            return 0;
        }
        if ((t1 + i) % 60 == h || (t1 + i) % 60 == m || (t1 + i) % 60 == s)
            break;
        i++;
    }
    i = 1;
    while (i < 60)
    {
        if ((t1 - i + 60) % 60 == h || (t1 - i + 60) % 60 == m || (t1 - i + 60) % 60 == s)
            break;
        if ((t1 - i + 60) % 60 == t2)
        {
            cout << "YES";
            return 0;
        }
        i++;
    }
    cout << "NO";
    return 0;
}
