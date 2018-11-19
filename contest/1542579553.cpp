#include <bits/stdc++.h>
using namespace std;

char s[12], str[12];
int main()
{
    int n;
    scanf("%s", s);
    scanf("%d", &n);
    int flag1 = 0, flag2 = 0;
    for(int i = 1; i <= n; i++)
    {
        scanf("%s", str);
        if(str[0] == s[1])
            flag1 = i;
        if(str[1] == s[0])
            flag2 = i;
         if(!strcmp(str, s))
         {
             flag1 = flag2 = 1;
         }
    }

    if(flag1 && flag2)
        printf("YES\n");
    else
        printf("NO\n");
}
