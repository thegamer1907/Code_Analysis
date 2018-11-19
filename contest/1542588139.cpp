#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10];
    char ss[105][10];
    char t[10];
    int n, i, j, k, len1;
    while(~scanf("%s", s))
    {
        scanf("%d", &n);
        for(i = 0; i < n; i++)
        {
            scanf("%s", ss[i]);
        }
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
               strcpy(t, ss[i]);
               strcat(t, ss[j]);
               len1 = strlen(t);
               for(k = 0; k < len1 - 1; k++)
               {
                   if(t[k] == s[0] && t[k+1] == s[1]) break;
               }
               if(k < len1 - 1) break;
            }
            if(j < n) break;
        }
        if(i < n) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
