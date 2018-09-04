#include <bits/stdc++.h>

using ll = long long ;

using namespace std;

pair<ll,ll> arr[120000];
ll m,s;

int main()
{
    int n,d;
    scanf("%d%d",&n,&d);
    for (int i =1 ; i <= n ; i ++)
    {
        scanf("%I64d%I64d",&m,&s);
        arr[i] = make_pair(m,s);
    }
    sort(arr+1,arr+n+1);
    ll sum = arr[1].second,ans = 0;
    int l = 1,r=1;
    for (int i = 1 ; i <= n ; i ++)
    {
        sum -= arr[i-1].second;
        for (int j = r+1 ; j <= n ; j ++)
        {
            if (arr[j].first-arr[i].first<d)
                sum += arr[j].second;
            else
                break;
            r = j;
        }
        ans = max(ans,sum);
    }
    printf("%I64d\n",ans);
    return 0;

}
