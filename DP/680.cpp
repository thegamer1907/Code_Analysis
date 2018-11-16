#include <bits/stdc++.h>

using namespace std;

int main()
{
     char s[100001];
    int a[100001], m, l, r;

    scanf("%s%d", s, &m);
    int len = strlen(s);

    a[1] = 0;
    for (int i = 1; i < len; ++i)
    {
        if (s[i] == s[i-1])
        {
            a[i+1] = a[i] + 1;
        }
        else
        {
            a[i+1] = a[i];
        }
    }

    while (m--)
    {
        scanf("%d%d", &l, &r);
        printf("%d\n", a[r] - a[l]);
}
    return 0;
}