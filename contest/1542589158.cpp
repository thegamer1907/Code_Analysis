#include <bits/stdc++.h>
using namespace std;
char s[10];
int n;
int main()
{
    while(~scanf("%s", s))
    {
        bool flag = false;
        scanf("%d", &n);
        char judge1 = s[0];
        char judge2 = s[1];
        bool tail = false;
        bool head = false;
        for(int i = 1; i <= n; i++)
        {
            scanf("%s", s);
            if(s[0] == judge1 && s[1] == judge2) flag = true;
            if(s[1] == judge1) tail = true;
            if(s[0] == judge2) head = true;
        }
        if(head && tail) printf("YES\n");
        else if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
