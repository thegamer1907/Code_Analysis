#include <bits/stdc++.h>

using namespace std;
int s1[105],s2[105];

int main()
{
    int n,nr=0;
    cin >> n;
    for (int i = 1; i<=n; i++)
    {
        int x;
        cin >> x;
        if (x)
        {
            nr++;
            s1[i] = s1[i-1]+1;
            s2[i] = s2[i-1];
        }
        else
        {
            s1[i] = s1[i-1];
            s2[i] = s2[i-1]+1;
        }
    }
    int Max = 0;
    for (int i = 1; i<=n; i++)
        for (int j = i; j<=n; j++)
            Max = max(Max,nr-(s1[j]-s1[i-1])+s2[j]-s2[i-1]);
    cout << Max;
}
