#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265
static const int INF = 0x3f3f3f3f;
static const long long INFL = 0x3f3f3f3f3f3f3f3fLL;
    const int lim = 2e5+10;
    long long int A[lim];
    map<long long int,long long int> Mi,Ml;

    int main()
    {
        long long int n,k;
        cin>>n>>k;
        for(int i=0;i<n;++i)
        {
            cin>>A[i];
            Ml[A[i]]++;
        }
        long long int ans = 0;
        for(int i=0;i<n;++i)
        {
            Ml[A[i]]--;
            if( A[i]%k == 0)
                ans+=(1LL*Mi[A[i]/k]*Ml[k*A[i]]);

            Mi[A[i]]++;

        }
        cout<<ans;
        return 0;
    }
