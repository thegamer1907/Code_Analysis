#include<bits/stdc++.h>
using namespace  std;
const int maxn = 1e2+10;

int a[maxn];

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int Max = 0, sum = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", a+i);
        Max = max(Max, a[i]);
        sum += a[i];
    }
    int ans1 = Max + m;
    int ans2 = max(Max, (sum+m)/n + ((sum+m)%n == 0 ? 0 : 1));
    cout << ans2 << " " << ans1 << endl;
    return 0;

}
