#include<bits/stdc++.h>

using namespace std;

#define ll long long int

bool check(ll n, ll k)
{
    ll cnt=0,vasya=0,temp=n;

    while(n>0)
    {
        if(cnt%2==0)
        {
            vasya+=min(k,n);

            n-=k;
        }

        else
        {
            n-=(n/10);
        }

        cnt++;
    }

    n=temp;

    ll need=temp/2;

    if(temp%2) need++;

    if(vasya>=need)
    {
        return true;
    }

    return false;
}

int main()
{
    ll n,i,j,lo,hi,mid;

    cin>>n;

    lo=1,hi=n;

    ll ans;

    while(lo<=hi)
    {
        mid=(lo+hi)/2;

        bool p=check(n,mid);

        if(p)
        {
            ans=mid;

            hi=mid-1;
        }

        else
        {
            lo=mid+1;
        }
    }

    cout<<ans<<endl;

    return 0;

}
