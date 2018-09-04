#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=100000+5;

int main()
{
    ll n;
    cin>>n;
    ll l=1,r=n;
    ll mid;
    while(l<r)
    {
        mid=(l+r)/2;
        ll cnt=n,sum=0;
        while(cnt)
        {
            sum+=mid;
            cnt-=mid;
            if(cnt/10<1) break;
            cnt-=cnt/10;
        }
        sum+=cnt;
        if(sum*2>=n) r=mid;
        else l=mid+1;
    }
    printf("%lld\n",l);
    return 0;
}