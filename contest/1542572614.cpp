#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,flag,n,flag1,flag2,flag3;
    char s[5],str[5000],st[5];
    while(scanf("%s",&s)==1)
    {
        scanf("%d",&n);

        flag=flag1=flag2=flag3=0;
        while(n--)
        {
            scanf("%s",st);
            if(strcmp(s,st)==0)
                flag1=1;
            for(i=0; i<2; i++)
            {
                if(s[0]==st[1] && flag==0)
                    flag=1;
                if(flag==1)
                    if(s[1]==st[0])
                        flag1=1;
                if(s[1]==st[0] && flag2==0)
                    flag2=1;
                if(flag2==1)
                    if(s[0]==st[1])
                        flag3=1;

            }
        }
//        flag=0;
//
//        for(i=0; i<j; i++)
//            str[j++]=str[i];
//        L=strlen(str);
//        for(i=0; i<L; i++)
//        {
//            if(str[i]==s[0] && str[i+1]==s[1])
//            {
//                flag=1;
//                break;
//            }
//        }
        if(flag1==1 || flag3==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
