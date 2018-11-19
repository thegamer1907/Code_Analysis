#include<bits/stdc++.h>
using namespace std;
char s[10];
char t[10];
int main()
{
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int i;
    int f=0;
    int f1=0,f2=0;
    for(i=1;i<=n;i++)
    {
        scanf("%s",t);
        if((t[0]==s[0] && t[1]==s[1])||(t[0]==s[1] && t[1]==s[0]))
            f=1;
        if(t[1]==s[0])
            f1=1;
        else if(t[0]==s[1])
            f2=1;
    }
    if(f ||(f1&&f2))
        printf("YES\n");
    else printf("NO\n");
    return 0;
}
