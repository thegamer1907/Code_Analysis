#include<stdio.h>
int main()
{
    char x[105];
    int i,k=0;
    gets(x);
    for(i=1;x[i]!='\0';i++)
    {
        if(x[i]==x[i-1])
        {
            k++;
            if(k>=6)
            {
                printf("YES\n");
                break;
            }
        }
        else
        {
            k=0;
        }
    }
    if(k<6)
    {
        printf("NO\n");
    }
    return 0;
}
