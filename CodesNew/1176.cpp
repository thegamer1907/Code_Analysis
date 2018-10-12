#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5+5;
const int INF = 0x3f3f3f3f;
int n, ans;
int main()
{
    scanf("%d", &n);
    int MIN = INF;
    for (int i = 1; i <= n; i++)
    {
        int a; 
        scanf("%d", &a);
        if(MIN > (a-i+n)/n)
        {
            MIN = (a-i+n)/n;
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}