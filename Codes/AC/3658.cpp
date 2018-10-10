#include<bits/stdc++.h>
using namespace std;

#define bll long long

char s[110];
int num[5],p[5],n[5];
long long k;

bool check(long long x)
{
    long long m = k;
    for (int i=0;i<3;i++)
    if (n[i]>0)
    {
        if (x*n[i] <= num[i]) continue;
        long long money = (x*n[i]-num[i])*p[i];
        if (m < money) return false;
        m -= money;
    }
    return true;
}

int main()
{
    while (scanf("%s",s)!=EOF)
    {
        for (int i=0;i<3;i++) scanf("%d",&num[i]);
        for (int i=0;i<3;i++) scanf("%d",&p[i]);
        scanf("%I64d",&k);

        int len = strlen(s);
        n[0] = n[1] = n[2] = 0;
        for (int i=0;i<len;i++)
        {
            if (s[i] == 'B') n[0]++;
            else
                if (s[i] == 'S') n[1]++;
                else
                    n[2]++;
        }

        long long l = 0;
        long long r = k+num[0]+num[1]+num[2]+1;
        while (r-l>1)
        {
            long long mid = (l+r)>>1;
            if (check(mid)) l = mid;
            else 
                r = mid;
        }
        printf("%I64d\n",l);
    }
    return 0;
}
