#include<stdio.h>
#include<string.h>

char s[110][5];

int main()
{
    char str[5],ss[5];
    scanf("%s",str);
    int n;
    int flag=0;
    char a='0',c='0';
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",ss);
        if(!strcmp(ss,str))
            flag=1;
        if(a=='0')
        {
            if(ss[1]==str[0])
            {
                a=str[0];
           // printf("&&&&&\n");
            }

        }
        if(c=='0')
        {
            if(ss[0]==str[1])
            {
                 c=str[1];
          //  printf("*****\n");
            }

        }
    }
    if(flag||(a!='0'&&c!='0'))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
