
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ldo;

#define print(A,n) for(ll i=0;i<n;i++)cout<<A[i]<<' ';cout<<endl;
#define take(a,n) for(ll i=0;i<n;i++)cin>>a[i];
#define forz(i,n) for(ll i=0;i<n;i++)
#define rep(i,s,e) for(ll i=s;i<e;i++)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define bs(v,x) binary_search(all(v),x)
#define zoom ios_base::sync_with_stdio(false);cin.tie(NULL);
//for(auto const&x:mp)



int main()
{
    ll n;
    cin>>n;
    ll i,j;
    ll a=0,ct=0;
    ll arr[n][3];
    for (i=0;i<n;i++)
    {
        for (j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }

    for (j=0;j<3;j++)
    {
        a=0;
        for(i=0;i<n;i++)
        {
            a+=arr[i][j];
        }
        if (a==0)
        {
            ct+=1;
        }
    }

    if (ct==3)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}


