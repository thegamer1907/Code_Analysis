#include <bits/stdc++.h>
using namespace std;
int n,k,a[20000007],p[20000007],SPF[20000007],F[20000007],ans[20000007],f[20000007],q,l,r;
vector < int > prime;
void pr()
{
    p[0] = p[1] = 1;

    for (long long i=2; i<=10000000; i++)
    {
        if (!p[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }

        for (long long j=0; j<prime.size() && i*prime[j]<=10000000 && prime[j]<=SPF[i]; j++)
        {
            p[i*prime[j]]=1;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
}
main ()
{
    cin>>n;

    pr();

    for (int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);

        while (a[i]!=1)
        {
            if (f[SPF[a[i]]]!=i)
            {
                F[SPF[a[i]]]++;
                f[SPF[a[i]]]=i;
            }

            a[i]=a[i]/SPF[a[i]];
        }
    }

    int j=0;

    for (int i=2; i<=10000000; i++)
        if (prime[j]==i) ans[i]=ans[i-1]+F[prime[j++]];
                    else ans[i]=ans[i-1];

    cin>>q;

    for (int i=1; i<=q; i++)
    {
        cin>>l>>r;

        r=min(r,10000000);

        if (l>10000000) cout<<0<<endl;
            else cout<<ans[r]-ans[l-1]<<endl;
    }
}
