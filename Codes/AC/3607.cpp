/// #ff9900 #ff9900 #ff9900 #ff9900     #ff9900 #ff9900 #ff9900 #ff9900 #ff9900
/*
Destroy my pain
Then capture life again
Destroy my shame
Can't live my life this way
LET! go, GO! let go
And capture life again
LET! go, GO! let go
Can't live my life this way
*/
#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define LL long long
using namespace std;
LL n,m,k,sol=5e18;
LL x,s;
LL va[200002],vb[200002];
LL vc[200002],vd[200002];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m>>k;
    cin>>x>>s;
    for(int i=1;i<=m;++i)
        cin>>va[i];
    for(int i=1;i<=m;++i)
        cin>>vb[i];
    for(int i=1;i<=k;++i)
        cin>>vc[i];
    for(int i=1;i<=k;++i)
        cin>>vd[i];
    for(int i=0;i<=m;++i)
    {
        LL cr=s-vb[i];
        LL timp=va[i];
        LL nr=n;
        if(cr<0)
            continue;
        if(timp==0)
            timp=x;
        int b=0;
        int e=k;
        while(b<=e)
        {
            int m=(b+e)/2;
            if(vd[m]<=cr && (m==k || vd[m+1]>cr))
            {
                nr-=vc[m];
                break;
            }
            if(vd[m]<=cr)
                b=m+1;
            else
                e=m-1;
        }
        sol=min(sol,timp*nr);
    }
    cout<<sol;
    return 0;
}
