#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
char a[12];
int main()
{
    char s[12];
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    int flag1=0,flag2=0;
    while(n--)
    {
        scanf("%s",a);
        if(a[0]==s[0]&&a[1]==s[1])
        {
            flag1=1;
            flag2=1;
        }
        if(a[1]==s[0])
        {
            flag1=1;
        }
        
        if(a[0]==s[1])
        {
            flag2=1;
        }
        memset(a,0,sizeof(a));
    }
    if(flag1&&flag2)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}