// In the name of Allah the Lord of the Worlds.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

unordered_map<ll , ll>l , r;
vector<ll>v;

int main(void)
{
    ll n , k;
    scanf("%lld %lld",&n ,&k);

    for(int i=0;i<n;i++){

        ll in;
        scanf("%lld",&in);
        r[in]++;

        v.push_back(in);
    }

    ll ans = 0;

    for(int i=0;i<n;i++){

        r[v[i]]--;

        if(v[i]%k==0){

            ans+=l[v[i]/k]*r[v[i]*k];
        }

        l[v[i]]++;
    }

    printf("%lld\n",ans);

    return 0;
}
