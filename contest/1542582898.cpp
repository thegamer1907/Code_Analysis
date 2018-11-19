#include <bits/stdc++.h>
using namespace std;

int a[100001],c[16];

int main()
{
	int n,k;
	cin>>n>>k;
	for (int i=1;i<=n;i++)
    {
        int s=0,t;
        for (int j=1;j<=k;j++)
        {
            scanf("%d",&t);
            (s<<=1)|=t;
        }
        c[s]++;
    }
    if (c[0])
    {
        puts("YES");
        return 0;
    }
    for (int i=0;i<(1<<k);i++)
        if (c[i])
        {
            for (int j=i+1;j<(1<<k);j++)
                if (c[j])
                {
                    bool flag=0;
                    for (int l=0;l<k;l++)
                        if (i&(1<<l)&&j&(1<<l))
                        flag=1;
                    if (!flag)
                    {
                        puts("YES");
                        return 0;
                    }
                }
        }
    puts("NO");
	return 0;
}
