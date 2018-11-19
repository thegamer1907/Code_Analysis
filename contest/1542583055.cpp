#include <bits/stdc++.h>

using namespace std;

int main()
{
    char f, s, str[3], flag1 = 0, flag2 = 0;
    int n;
    scanf("%c%c", &f, &s);
    scanf("%d", &n);

    while(n--)
    {
        scanf("%s", str);

        if(str[0] == f && str[1] == s)
        {
            printf("YES");
            return 0;
        }

        if(str[0] == s && str[1] == f)
        {
            printf("YES");
            return 0;
        }

        if(str[0] == s)
        {
            flag2 = 1;
        }

        if(str[1] == f)
        {
            flag1 = 1;
        }
    }

    if(flag1 && flag2)
    {
        printf("YES");
    }

    else
    {
        printf("NO");
    }

    return 0;
}
