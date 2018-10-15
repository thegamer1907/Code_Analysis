#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,i,c=0,m;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]>=2*a[c])
            c++;
    }
    c=min(n/2,c);
    cout<<n-c;
    return 0;
}