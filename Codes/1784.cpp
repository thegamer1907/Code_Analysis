/* 2018-03-19-14.01.24 */

#include<bits/stdc++.h>
#define ll long long int
#define N 100010
using namespace std;

vector<ll> p;

int main()
{
    ll n,k,m;
    scanf("%lld %lld %lld",&n,&m,&k);

    ll L=1,R=n*m,i;

    while(L<=R)
    {
        ll mid=(L+R)/2,cnt=0,temp=0;
        bool key=false;
        for(i=1;i<=n;i++)
        {
            if(mid>i*m)
            {
                cnt+=m;
                continue;
            }
            if(mid%i==0) key=true,temp++;
            cnt+=mid/i;
        }
        if(key && cnt>=k && (cnt-temp+1)<=k)
        {
            printf("%lld\n",mid);
            break;
        }
        //printf("%lld %lld %lld %lld\n",L,R,cnt,temp);
        if(cnt>=k) R=mid-1;
        else L=mid+1;
    }
    return 0;
}
