#include<stdio.h>
#include<string.h>
int main()
{
    char a[101];
    int i,l,flag,sum,count;
    while(gets(a))
    {
        sum=1;
        flag=0;
        count=1;
        l=strlen(a);
        for (i=0; i<l; i++)
        {
            if(a[i]=='1'&&a[i+1]=='1')
            {
                sum++ ;
                if (sum==7)
                {
                    flag=1;
                    break;
                }
            }
            if ((a[i]=='1'&&a[i+1]=='0')||(a[i]=='0'&&a[i+1]=='1'))
            {
                sum=1;
            }
            if (a[i]=='0'&&a[i+1]=='0')
            {
                count++;
                if (count==7)
                {
                    flag=1;
                    break;
                }

            }
            if ((a[i]=='1'&&a[i+1]=='0')||(a[i]=='0'&&a[i+1]=='1'))
            {
                count=1;
            }

        }

        if (flag==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}