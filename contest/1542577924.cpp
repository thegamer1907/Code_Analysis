#include<bits/stdc++.h>
using namespace std;
char str[10],str1[10];
char ss[200][2];
int main()
{
    while(~scanf("%s",str))
    {
        memset(ss,0,sizeof(ss));
        int num;
        scanf("%d",&num);
        int flag1=0;
        for(int i=0;i<num;i++)
        {
            getchar();
            scanf("%s",ss[i]);
            if(strcmp(str,ss[i])==0)
            {
                flag1=1;
                continue;
            }
        }
        if(flag1)
        {
            printf("YES\n");
            continue;
        }
        int flag=0;
        for(int i=0;i<num;i++)
            for(int j=0;j<num;j++)
        {
            str1[0]=ss[i][1];
            str1[1]=ss[j][0];
            if(strcmp(str1,str)==0)
                {
                    flag=1;
                    break;
                }
        }
        puts(flag?"YES":"NO");
    }
    return 0;
}
