#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lp for(ll i=0; i<n; i++)
#define lps for(ll i=0; i<len; i++)

int main()
{
    ll n,k;
    cin>>n>>k;
    ll a[n+5],coun=0;;
    lp
        cin>>a[i];

    lp{
        if(a[i]>=a[k-1] && a[i]>0)
            coun++;
    }
    cout<<coun<<endl;
}