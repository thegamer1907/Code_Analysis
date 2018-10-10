#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int maxn = 1e5 + 3;

int n,a[maxn];
ll ans = 1e18 + 7,s,af[maxn];

ll chk(int k)
{
    ll tot = 0;   
    for (int i = 0; i < n ;i++)
        af[i] = 1LL*a[i] + 1LL*(i+1) *k;      
    sort(af,af+n);
    for (int i = 0;i<k;i++)
        tot += af[i];        
    return tot;
}

int main()
{               
    scanf("%d%I64d",&n,&s);
    for (int i = 0;i<n;i++) 
    {
        scanf("%d",&a[i]); 
    } 
    int lo = 0,hi = n,mid = (lo+hi)/2;
    while (lo != mid && hi != mid)
    {   
        ll tmp = chk(mid);
        if (tmp <= s)
        {
            lo = mid;
        }
        else hi = mid;
        mid = (lo+hi)/2;
    }
    for (;hi>=lo;hi--)
    {
        ll tmp = chk(hi);
        if (tmp <= s)
        {
            ans = min(ans,tmp);
            printf("%d %I64d",hi,tmp);
            return 0;   
        }
    }
    printf("0 0");
    return 0;
}