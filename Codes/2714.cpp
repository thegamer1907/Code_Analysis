#include<iostream>
#include<cstdio>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
char a[1000010];
int Next[1000010];
int vis[1000010];
void getnext(int m)
{
    int i=0,j=-1;
    Next[0]=-1;
    while(i<m)
    {
        if(j==-1||a[i]==a[j])
        {
            i++,j++;
            Next[i]=j;
        }
        else
            j=Next[j];
    }
}
int main()
{
    while(~scanf("%s",a))
    {
        memset(vis,0,sizeof(vis));
        int m=strlen(a);
        getnext(m);
        int k=Next[m];
        for(int i=0;i<m;i++)
            vis[Next[i]]=1;
        int flag=0;
        while(k)
        {
            if(vis[k]!=0)
            {
                for(int i=0;i<k;i++)
                    printf("%c",a[i]);
                printf("\n");
                break;
            }
        else
            k=Next[k];
        }
        if(k==0)
        printf("Just a legend\n");
    }
    return 0;
}

