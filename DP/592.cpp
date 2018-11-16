#include<bits/stdc++.h>
using namespace std;
#define ll long long int
/*int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<4*(sqrt(a*c/b)+sqrt(a*b/c)+sqrt(b*c/a))<<endl;
    return 0;
}
*/
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    ll l=s.size();
    ll arr[l];
    ll a[l];
    for(ll i=0; i<l; i++)
    {
        if(s.at(i)=='.')
        {
            arr[i]=1;
        }
        else
        {
            arr[i]=0;
        }
    }

    ll sum=0;
    for(ll i=1; i<l; i++)
    {
        if(arr[i]==arr[i-1])
        {
            sum++;
            a[i]=sum;
        }
        else
        {
            a[i]=sum;
        }
    }
    a[0]=0;
    /*for(ll i=0; i<l; i++)
    {
        cout<<a[i]<<endl;
    }*/

    ll n,p,q;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>p>>q;
        ll ans=a[q-1]-a[p-1];
        cout<<ans<<endl;
    }
    return 0;
}
