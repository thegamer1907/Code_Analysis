#include <stdio.h>
#include <string.h>
char str[100005];
int main()
{
    int i,j,len;
    while(~scanf("%s",str))
    {
        len = strlen(str);
        int a1,b1,a2,b2;
        a1 = b1 = a2 = b2=-1;
        for(i = 0; i<len-1;)
        {
            if(a1==-1 && str[i]=='A' && str[i+1]=='B' )
            {
                a1 = i;
                b1 = i+1;
                i = i+2;
                continue;
            }
            if(a2 == -1 && str[i]=='B' && str[i+1]=='A')
            {
                b2 = i;
                a2 = i+1;
                i = i+2;
                continue;
            }
            if(a1!=-1 && a2!=-1)
                break;
            i++;
        }
        if(a1==-1 || a2==-1)
        {
            a1 = b1 = a2 = b2=-1;
            for(i = len-1; i>=1;)
            {
                if(a1==-1 && str[i]=='A' && str[i-1]=='B' )
                {
                    a1 = i;
                    b1 = i-1;
                    i = i-2;
                    continue;
                }
                if(a2 == -1 && str[i]=='B' && str[i-1]=='A')
                {
                    b2 = i;
                    a2 = i-1;
                    i = i-2;
                    continue;
                }
                if(a1!=-1 && a2!=-1)
                    break;
                i--;
            }
 
        }
        if(a1!=-1 && a2!=-1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
 
    return 0;
}
