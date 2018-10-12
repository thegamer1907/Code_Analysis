#include<bits/stdc++.h>

using namespace std;

long long a[1000000],c[1000000];

int main()
{
    long long ans,m,n,t;
    cin>>n>>t>>c[0];

    for (int i=1 ;i<n ;i++)
    {
        cin>>c[i];
        c[i]+=c[i-1];
    }

    ans=0,m=0;

    while (t--)
    {
        long long k;

        cin>>k;

        m+=k;

        ans= upper_bound(c,c+n,m)-c;

        if (ans == n)
        {
            m=0;
            ans=0;
        }
        cout<<n-ans<<endl;
    }
}
