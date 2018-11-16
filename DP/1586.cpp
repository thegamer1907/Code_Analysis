/* DHUOJ solution #368844 @ 2018-11-13 15:45:32.231 */

#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;

char s[100005],s1[100005];

int main()
{
    while(scanf("%s",s)!=EOF)
    {
        bool flag1=false,flag2=false;
        bool flag3=false,flag4=false;
        int l=strlen(s);
        for(int i=0;i<l;i++)
            s1[i]=s[i];
        for(int i=0;i<l-1;i++)
        {
            if(s[i]=='A'&&s[i+1]=='B')
            {
                flag1=true;
                s[i]='Z';
                s[i+1]='Z';
                break;
            }
        }
        for(int i=0;i<l-1;i++)
        {
            if(s[i]=='B'&&s[i+1]=='A')
            {
                flag2=true;
                s[i]='Z';
                s[i+1]='Z';
                break;
            }
        }
        for(int i=0;i<l-1;i++)
        {
            if(s1[i]=='B'&&s1[i+1]=='A')
            {
                flag3=true;
                s1[i]='Z';
                s1[i+1]='Z';
                break;
            }
        }
        for(int i=0;i<l-1;i++)
        {
            if(s1[i]=='A'&&s1[i+1]=='B')
            {
                flag4=true;
                s1[i]='Z';
                s1[i+1]='Z';
                break;
            }
        }
        if((flag1&&flag2)||(flag3&&flag4)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
