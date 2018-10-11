#include<bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;

bool fun(ll k,ll n)
{
    ll left = n,ans1=0;
    while(left>0)
    {
        if(left < k)
        {
            ans1 += left;
            left =0;
        }
        else
        {
            ans1 += k;
            left -= k;
        }

        left -= (left/10);
    }
    if((1LL*2*ans1)>=n)
        return true;
    else
        return false;

}


int main()
{
    ll n,ans;
    cin>>n;
    ll low=1;
    ll high = (n/2)+1;
    ans = high;
    while(low<=high)
    {
        ll mid = (low+high)/2;
        if(fun(mid,n))
        {
            ans = mid;
            high = mid-1;
        }
        else
            low = mid+1;
    }
    cout<<ans;
}
