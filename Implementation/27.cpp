#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    int rez = 8;
    a--;
    b--;
    int st = 1;
    while (n > (1 << st))
        st++;
    int mask = 0x100;
    while ((a&mask) == (b&mask))
    {
        rez--;
        mask = mask ^ (1 << rez);
    }
    rez++;
    if (rez == st)
        cout << "Final!" << endl;
    else
        cout << rez << endl;
    return 0;
}
