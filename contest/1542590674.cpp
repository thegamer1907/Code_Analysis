#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
using namespace std;
char s[2],ss[1000006];
int main()
{
    int mark=0,mark1=0,mark2=0,i,j;
    int n;
    scanf("%s",s);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",ss);
        int l=strlen(ss);
        for(j=0;j<l;j++)
        {
            if(j<l&&ss[j]==s[0]&&ss[j+1]==s[1])mark=1;

        }
        if(ss[0]==s[1]) mark1=1;
        if(ss[l-1]==s[0]) mark2=1;
    }
    if(mark==1||(mark1==1&&mark2==1)) printf("YES\n");
    else printf("NO\n");
    return 0;
}
