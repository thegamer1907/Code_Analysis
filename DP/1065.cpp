#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i;
    cin>>n;
    ll a[n+1],x=0,y=0,z=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            x++;
        if(a[i]==0)
        {
            y++;
            if(y>z)
                z=y;
        }
        else if(y>0)
            y--;
    }
    if(z==0)
        z--;
    cout<<x+z<<"\n";
    return 0;
}
