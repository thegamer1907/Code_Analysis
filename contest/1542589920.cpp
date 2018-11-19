#include <bits/stdc++.h>
using namespace std;
string psw;
int n, chk[2];

void ok()
{
    puts("YES");
    exit(0);
}

int main()
{
    cin >> psw >> n;
    while (n--)
    {
        string tmp;
        cin >> tmp;
        if (tmp == psw)
            ok();
        if (tmp[1] == psw[0])
            chk[0] = 1;
        if (tmp[0] == psw[1])
            chk[1] = 1;
    }
    if (chk[0] && chk[1])
        ok();
    puts("NO");
    return 0;
}