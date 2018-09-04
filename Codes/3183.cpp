#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL arr[100008];
int main()
{
    int n;
    LL ans = 0x3f3f3f3f3f3f3f3f;
    int ansi = -1;
    scanf("%d",&n);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%I64d",&arr[i]);
        if (arr[i] % n > i - 1) arr[i] = ((arr[i] / n) + 1) * n + i;
        else if (arr[i] % n <= i - 1) arr[i] = arr[i] / n * n + i;
        if (arr[i] < ans)
        {
            ans = arr[i];
            ansi = i;
        }
    }
    printf("%d",ansi);
}