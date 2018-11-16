#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll k;
    cin>>k;


    ll n;
    ll w;
    cin>>n>>w;
    ll ans=0;
    ans=(((w)*(w+1))/2)*k-n;
    if(ans<0)
    {
        cout<<"0";
        return 0;
    }

    cout<<ans;
    return 0;

}

