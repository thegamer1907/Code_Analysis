#include <bits/stdc++.h>

using namespace std;

vector<int> t(3);

int foo(int x)
{
    int i = 0;
    while (x > t[i] && i < 3)
        i++;
    if (i == 0)
        i = 3;
    return i-1;
}

int main()
{
    int h, m, s, t1, t2;

    cin >> h >> m >> s >> t1 >> t2;
    h = h % 12;
    t1 = t1 % 12;
    t2 = t2%12;

    h *= 30;
    t1 *= 30;
    t2 *= 30;
    m *= 6;
    s *= 6;
    t = {h, m, s};
    sort(t.begin(), t.end());
    if (t1 > t2)
        swap(t1, t2);
    int a = foo(t1), b = foo(t2);
    if (a == b)
        cout << "YES";
    else
        cout << "NO";




    return 0;
}

