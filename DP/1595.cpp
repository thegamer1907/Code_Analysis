/* DHUOJ solution #368761 @ 2018-11-12 13:50:02.238 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int i,len;
    int flag1a,flag2a;
    int flag1b,flag2b;
    char str[100001]={'\0'};
    while (scanf("%s",str)!=EOF)
    {
        flag1a=0;flag1b=0;
        flag2a=0;flag2b=0;


        len=strlen(str);


        for (i=0;i<len-1;i++)
        {
            if (str[i]=='A' && str[i+1]=='B' && flag1a==0) {flag1a=1;  i++;}
            else if (str[i]=='B' && str[i+1]=='A' && flag1b==0) {flag1b=1;  i++;}
        }

        for (i=len-2;i>=0;i--)
        {
            if (str[i]=='A' && str[i+1]=='B' && flag2a==0) {flag2a=1;  i--;}
            else if (str[i]=='B' && str[i+1]=='A' && flag2b==0) {flag2b=1;  i--;}
        }



        if (flag1a && flag1b || flag2a && flag2b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}


