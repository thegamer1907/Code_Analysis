#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int vis[65];
    int h,m,s,t1,t2;
    while(scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF)
    {
        memset(vis,0,sizeof(vis));
        vis[(h*5)%60]++;
        vis[m]++;
        vis[s]++;
        int cnt=0;
        t1=(t1*5)%60;
        t2=(t2*5)%60;
        //printf("%d %d\n",t1,t2);
       for(int i=t1%60;i!=t2;i=(i+1)%60){
            if(vis[i]!=0)
                { // printf("%d ",i);
                    cnt+=vis[i];}
        }
        if(cnt==0||cnt==3){
            printf("YES\n");
        }
        else  printf("NO\n");
    }
}
