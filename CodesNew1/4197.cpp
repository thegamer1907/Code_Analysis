#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>
#define ll long long 
#define ld long double
using namespace std;
ll bsearch(ll a[],ll s,ll e,ll x)
{
    if(s==e)
        return s;
    ll mid=(s+e)/2;
    if(a[mid]<=x)
        return bsearch(a,mid+1,e,x);
    return bsearch(a,s,mid,x);
}
int main()
{
    ll n,q,i,x,j;
    cin>>n>>q;
    ll a[n],k[q],ca[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<q;i++)
        cin>>k[i];
    ca[0]=a[0];
    for(i=1;i<n;i++)
        ca[i]=a[i]+ca[i-1];
    x=0;
    for(i=0;i<q;i++)
    {
        k[i]+=x;
        if(k[i]>=ca[n-1])
        {
            x=0;
            cout<<n<<"\n";
        }
        else
        {
            x=k[i];
            j=bsearch(ca,0,n-1,k[i]);
            cout<<n-j<<"\n";
        }
    }
    return 0;
}