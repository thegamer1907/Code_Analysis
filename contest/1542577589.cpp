#include<stdio.h>

int main()
{
    char str[1000][3];
    int n,i,flag,flag1[1000],flag2[1000],cnt1,cnt2;
    while(scanf("%s",str[0])==1)
    {
        scanf("%d",&n);
        flag=0;
        cnt1=0;
        cnt2=0;
        for(i=1;i<=n;i++)
        {
            scanf("%s",str[i]);
        }
        for(i=1;i<=n;i++)
        {
            if(str[i][0]==str[0][0]&&str[i][1]==str[0][1])
            {
                cnt1=1;
                cnt2=1;
                break;
            }
            if(str[i][1]==str[0][0])
            {
                flag1[i]=1;
                cnt1++;
            }
            else
            {
                flag1[i]=0;
            }
            if(str[i][0]==str[0][1])
            {
                flag2[i]=1;
                cnt2++;
            }
            else
            {
                flag2[i]=0;
            }
        }
        if(cnt1>0&&cnt2>0)
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
