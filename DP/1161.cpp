#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n;
int a[150];
int main()
{
    int cnt = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i] == 1)
            cnt++;
    }
    if(cnt == n){
        printf("%d\n",n-1);
        return 0;
    }
    int ans = cnt;
    int sum[5];
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            memset(sum,0,sizeof(sum));
            for(int k=i;k<=j;k++)
                sum[a[k]] ++;
            if(sum[0] > sum[1])
                ans = max(ans,cnt + sum[0] - sum[1]);
        }
    }
    printf("%d\n",ans);
    return 0;
}
