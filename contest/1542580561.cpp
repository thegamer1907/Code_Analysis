#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;

int f[1100];

bool judge(int x,int y)
{
    int a[10];
    memset(a,0,sizeof(a));
    int cnt = 0;
    while(x)
    {
        a[cnt] = x%2;
        x /= 2;
        cnt++;
    }
    cnt = 0;
    while(y)
    {
        a[cnt] += (y%2);
        y /= 2;
        if(a[cnt] > 1)
            return false;
        cnt++;
    }
    return true;
}
int main(void)
{
    int n,k,i,j;
    while(scanf("%d%d",&n,&k)==2)
    {
        memset(f,0,sizeof(f));
        for(i=1;i<=n;i++)
        {
            int t = 0;
            for(j=1;j<=k;j++)
            {
                int x;
                scanf("%d",&x);
                t = t*2+x;
            }
            f[t]++;
        }
        if(f[0] > 0)
        {
            printf("YES\n");
            continue;
        }
        int flag = 0;
        for(i=1;i<=15;i++)
        {
            for(j=1;j<=15;j++)
            {
                if(i == j)
                    continue;
                if(f[i] == 0 || f[j] == 0)
                    continue;
                if(judge(i,j))
                    flag = 1;
            }
        }
        if(flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
