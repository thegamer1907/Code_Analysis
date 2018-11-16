#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,Z=0,O=0,len,flag=0;
    char c[105];
    gets(c);
    len=strlen(c);
    for(i=0; i<len; i++)
    {
        if(c[i]=='0')
        {
            Z++;
            O=0;
        }
        else
        {
            O++;
            Z=0;
        }
        if(Z==7||O==7)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
