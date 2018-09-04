#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int n;;
long long ans,k;
map <int,long long> r,r1;
int main()
{
    scanf("%d%d",&n,&k);
    for (int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        if (a%k==0)
        {
            ans+=(r1[a/k]);
            r1[a]+=r[a/k];
        }
        r[a]++;
    }
    printf("%lld",ans);
    return 0;
}
