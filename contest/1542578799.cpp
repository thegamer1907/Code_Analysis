#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
bool used[43210];
int main()
{
    int h,m,s,t1,t2;
    while(scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF)
    {
        memset(used,false,sizeof(used));
        used[(h*30*120+m*60+s)%43200]=true;
        used[(m*6*120+s*2)%43200]=true;
        used[(s*6*120)%43200]=true;
        bool flag1=true,flag2=true;
        if(t1<t2)swap(t1,t2);
        for(int i=t1*30*120;i<=43200;i++)
        {
            if(used[i])
            {
                flag1=false;
                break;
            }
        }
        for(int i=0;i<=t2*30*120;i++)
        {
            if(used[i])
            {
                flag1=false;
                break;
            }
        }
        for(int i=t2*30*120;i<=t1*30*120;i++)
        {
            if(used[i])
            {
                //printf("i=%d\n",i);
                flag2=false;
                break;
            }
        }
        //printf("%d %d\n",flag1,flag2);
        if(!flag1&&!flag2)
        {
            printf("NO\n");
        }
        else
            printf("YES\n");
    }
    return 0;
}
