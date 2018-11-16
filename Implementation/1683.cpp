#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,l,flag=0;
    char s[105];

    scanf("%s", s);
    l = strlen(s);
    if(l>=7)
    {
        for(i=0; i<l-6; i++)
        {
            if(s[i]==s[i+1] && s[i+1]==s[i+2] && s[i+2]==s[i+3] && s[i+3]==s[i+4] && s[i+4]==s[i+5] && s[i+5]==s[i+6])
               flag=1;
        }
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    flag=0;

    return 0;
}
