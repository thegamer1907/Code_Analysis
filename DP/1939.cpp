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
    ll n,m;
    cin>>n>>m;
    ll arr1[n];
    ll sum[n];
    ll arr2[100005];
    memset(arr2,0,sizeof arr2);
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        arr1[i]=a;
        arr2[a]++;
       // cout<<"y "<<arr2[a];
    }

    ll cnt=0;
    for(ll i=n-1;i>=0;i--)
    {
       // cout<<arr2[arr1[i]]<<" ";
        if(arr2[arr1[i]]>=1)
        {
            arr2[arr1[i]]=0;
            cnt++;
            sum[i]=cnt;
           // cout<<"sum"<<sum[i]<<" ";
        }
        else
        {
            sum[i]=cnt;
        }
    }

    for(ll i=0;i<m;i++)
    {
        ll a;
        cin>>a;
        cout<<sum[a-1]<<endl;
    }
    return 0;
}

