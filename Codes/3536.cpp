#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll r=n;
    ll l=1;
    ll mid;
    while(r>l)
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
    cout<<l<<endl;
    return 0;
}
