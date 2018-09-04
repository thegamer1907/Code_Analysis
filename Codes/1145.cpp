#include<bits/stdc++.h>
using namespace std;
const int N = 1000100;
int n;
long long d;
pair<long long,long long > f[N];

int main()
{
    scanf("%d%I64d",&n,&d);
    for(int i=0;i<n;i++)
    {
        scanf("%I64d%I64d",&f[i].first,&f[i].second);
    }


    sort(f,f+n);
    long long ans=f[0].second;
    int minn=0;
    long long  now=f[0].second;
    for(int i=1;i<n;i++)
    {
        if(f[i].first-f[minn].first>=d)
        {
            for(int j=minn;j<i;j++)
            {
                if(f[i].first-f[j].first>=d)
                {
                    minn=j;
                    now-=f[j].second;
                }
                else if(f[i].first-f[j].first<d)
                {
                    minn=j;
                    break;
                }
                if(j==i-1)
                {
                    minn=i;
                    now=0;
                    break;
                }

            }

            now+=f[i].second;
            ans=max(now,ans);
        }
        else
        {
            now+=f[i].second;
            ans=max(now,ans);
        }
    }

    ans=max(now,ans);


    printf("%I64d\n",ans);
}
