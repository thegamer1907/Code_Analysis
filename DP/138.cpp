#include <bits/stdc++.h>4

using namespace std;
int b[109],g[109],n,m;

int main()
{
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        int a;
        cin >> a;
        b[a]++;
    }
    cin >> m;
    for (int i=1;i<=m;i++)
    {
        int a;
        cin >> a;
        g[a]++;
    }
    int res = 0;
    for (int i =1;i<=100;i++)
    {
        if (b[i]==0) continue;
        int j = i-1;
        while (j<i+2)
        {
            if (b[i]==0) break;
            if (g[j]>0)
            {
                int temp= min(b[i],g[j]);
                res+=temp;
                b[i]-=temp;
                g[j]-=temp;
            }
            j++;
        }
    }
    cout << res;
    return 0;
}