#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll> v;
    for(ll i=0;i<n;i++){
            ll temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    vector<ll>fh,sh;
    for(ll i=0;i<n;i++){
        if(i<ceil((float)n/2))
    fh.push_back(v[i]);
        else
    sh.push_back(v[i]);
    }
    ll i=0,j=0;
    ll ans=n;
    while(i<fh.size() && j<sh.size()){
        if(sh[j]>=2*fh[i])
            ans--,i++,j++;
        else
            j++;
    }

    cout<<ans<<endl;
    return 0;
}
