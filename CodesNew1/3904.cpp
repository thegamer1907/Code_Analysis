#include<algorithm>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

typedef long long ll;
const int inf = 1e9 + 42;
const int maxn = 1e5 + 42;
int n, a[maxn]; 
ll cnt;

bool chk(ll x)
{
	cnt = 0;
    for(int i = 1; i <= n; i++)
    	cnt += x - a[i];
    
    return cnt >= x;
}
int main()
{
    scanf("%d", &n);
    ll l = -1, r = 0, mid;
    for(int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
        l = max(l, (ll)a[i]);
        r += (ll)a[i];
    }
    while(l < r)
    {
        mid = (l + r) / 2;
        if(chk(mid))
            r = mid;
        else
            l = mid+1;
    }
    printf("%lld", r);
    return 0;
}