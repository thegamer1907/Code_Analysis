#include <iostream>
#include <set>
#include <cstring>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s;
    set<string> pl;

    for (int i = 0; i < n; ++i)
    {
        cin >> s;
        pl.insert(s);
    }
    int k = 0;
    for (int i = 0; i < m; ++i)
    {
        cin >> s;
        if (pl.find(s) != pl.end())
            k++;
    }
    bool step = (k % 2 == 0);
    n -= k;
    m -= k;
    if (!step)
    {
        if (m > n)
            cout << "NO";
        else
            cout << "YES";
    }
    else
    {
        if (n > m)
            cout << "YES";
        else
            cout << "NO";
    }
}