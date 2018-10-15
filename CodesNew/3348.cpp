#include<bits/stdc++.h>
using namespace std;
int a[105];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);

    int sum = 0;
    int ans = 0;
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        sum = max(sum , a[i]);
        ans += a[i];
    }


    int x = sum;
    sum += m;
    ans += m;

    int flag = ans % n;
    ans /= n;
    if(flag) ans += 1;

    ans = max(x, ans);

    printf("%d %d\n", ans,sum);

}
