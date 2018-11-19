#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
char s[10];
char m[10];
int main()
{
    while(~scanf("%s",s))
    {
        char first,second;
        first=s[0];
        second=s[1];
        int k;
        scanf("%d",&k);
        int flag1=0;
        int flag2=0;
        if(k==1)
        {
            scanf("%s",m);
            if((m[0]==first&&m[1]==second)||(m[1]==first&&m[0]==second))
                printf("YES\n");
            else
                printf("NO\n");
            continue;
        }
        while(k--)
        {
            scanf("%s",m);
            if((m[0]==first&&m[1]==second)||(m[1]==first&&m[0]==second))
            {
                flag1=flag2=1;
                continue;
            }
            if(m[0]==second)
                flag1=1;
            if(m[1]==first)
                flag2=1;
        }
        if(flag1&&flag2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
