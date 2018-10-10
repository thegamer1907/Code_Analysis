#include <bits/stdc++.h>

using namespace std;

#define ll long long int

bool status[10000005];

ll vis[10000005],cum[10000005];

int main()
{
    ll i,j,si,n,m;

    scanf("%I64d",&n);

    for(i=0; i<n; i++)
    {
        ll x;

        scanf("%I64d",&x);

        vis[x]++;
    }

    //cout<<"bal: "<<vis[2]<<endl;

    for(i=2; i<=10000000; i++)
    {
        if(!status[i])
        {
            for(j=i; j<=10000000; j+=i)
            {
                status[j]=true;

                cum[i]+=vis[j];

            }
        }
    }

   // cout<<"chod: "<<cum[2]<<endl;

    cum[0]=0,cum[1]=0;

    for(i=2; i<=10000000; i++)
    {
        cum[i]+=cum[i-1];

       // if(i<=11) cout<<cum[i]<<endl;
    }

    scanf("%I64d",&m);

    for(i=0; i<m; i++)
    {
        ll l,r;

        scanf("%I64d %I64d",&l,&r);

        if(l>1e7) l=1e7;

        if(r>1e7) r=1e7;

        printf("%I64d\n",cum[r]-cum[l-1]);
    }

    return 0;


}
