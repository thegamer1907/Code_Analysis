#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,f=0;
    string x,y[110];
    cin>>x;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    for (int i=0;i<n;i++)
    {
        if (f)
            break;
        if (y[i][0]==x[0]&&y[i][1]==x[1])
        {
            f=1;
            break;
        }
        if (y[i][1]==x[0])
        {
            for (int i=0;i<n;i++)
            {
                if (y[i][0]==x[1])
                {
                    f=1;
                    break;
                }
            }
        }
    }
    if (f)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
