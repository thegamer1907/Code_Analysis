#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int sum[111111];
int main()
{
    int n,a,m,b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        sum[i]=sum[i-1]+a;
    }
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        scanf("%d",&b);
        int pos=lower_bound(sum+1,sum+n+1,b)-sum;
        printf("%d\n",pos);
    }
    return 0;
}
