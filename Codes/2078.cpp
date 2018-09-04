#include<bits/stdc++.h>

using namespace std;

const long long N=2e5+5,
        INF=1e9+7;

map<long long, long long>usd1, usd2;

long long n, k, ans;
long long a[N];

main()
{

    cin>>n>>k;
    for (long long i=1; i<=n; ++i){
        cin>>a[i];
        usd2[a[i]]++;
    }
    for (long long i=1; i<=n; ++i){
        usd2[a[i]]--;

        if (a[i]%k==0)
            ans+=usd1[a[i]/k]*usd2[a[i]*k];

        usd1[a[i]]++;
    }
    cout<<ans;
}
