#include<bits/stdc++.h>
using namespace std;

const int Max = 1e5 + 11;

int n, m;
int num[10], sum[20];

int main()
{
    scanf("%d %d", &n, &m);
    memset(sum, 0, sizeof(sum));
    for (int i = 0; i < n; ++i)
    {
        int temp = 0;
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &num[j]);
            if (num[j])
                temp += (1 << j);
        }
        sum[temp]++;
    }

    int team[10];
    int flag=0;

    for (int i = 0; i < 16; ++i)
    {
        for (int j = 0; j < 16; ++j)
        {
            memset(team, 0, sizeof(team));
            if (sum[i] && sum[j])
            {
                int tempi = i;
                int tempj = j;
                for(int k=1; k<=m; ++k)
                {
                    if(tempi&1)
                        ++team[k];
                    tempi=tempi>>1;
                }

                for(int k=1; k<=m; ++k)
                {
                    if(tempj&1)
                        ++team[k];
                    tempj=tempj>>1;
                }
                int biao=1;
                for(int k=1;k<=m;++k)
                {
                    if(team[k]==2)
                        biao=0;
                }
                if(biao)
                {
                    flag=1;
                    //printf("%d  %d\n",i,j);
                }

            }
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
