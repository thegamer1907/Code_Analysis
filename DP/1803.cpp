#include<stdio.h>
#include<string.h>
int main()
{
    char str[100005];
    int i, j, len, flag = 0, count = 0, flg = 0, cout = 0, f=0, c=0;
    gets(str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(f==0)
        {
            if((str[i] == 'A' && str[i+1] == 'B' && str[i+2] == 'A') || (str[i] == 'B' && str[i+1] == 'A' && str[i+2] == 'B'))
            {
                i+=3;
                f=1;
                c++;
            }
        }
        if(f==1)
        {
            if((str[i] == 'A' && str[i+1] == 'B') || (str[i] == 'B' && str[i+1] == 'A'))
            {
                printf("YES\n");
                return 0;
            }
        }
        if(flag == 0)
        {
            if(str[i] == 'A' && str[i+1] == 'B')
            {
                i+=2;
                flag = 1;
                count++;

            }
        }
        if(flag == 1)
        {
            if(str[i] == 'B' && str[i+1] == 'A')
            {
                i+=2;
                flag = 0;
                count++;
            }
        }
        if(flg == 0)
        {
            if(str[i] == 'B' && str[i+1] == 'A')
            {
                i+=2;
                flg = 1;
                cout++;

            }
        }
        if(flg == 1)
        {
            if(str[i] == 'A' && str[i+1] == 'B')
            {
                i+=2;
                flg = 0;
                cout++;
            }
        }

    }
    //printf("%d\n%d\n", count, cout);
    if(count + cout >= 2)
        printf("YES\n");
    else
        printf("NO\n");
        return 0;
}

