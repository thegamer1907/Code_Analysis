#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll k;
    cin>>k;
    ll ans=18;
    while(k)
    {
        ans++;
        ll num=ans,d=0;
        while(num!=0)
        {
            d+=num%10;
            num/=10;
        }
        if(d==10)
            k--;
    }
    cout<<ans;
    return 0;
}
