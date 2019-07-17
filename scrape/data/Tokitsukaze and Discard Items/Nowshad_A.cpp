#include<bits/stdc++.h>
#define pb push_back
#define mpr make_pair
#define mem(v,false) memset(v,false,sizeof(v))
#define f first
#define ss second
#define sf(n) scanf("%d",&n)
#define lli long long
#define debug(n) cout << n << endl;

using namespace std ;

lli ar[1000000];
int main()
{
    lli n,m,k;

    cin >> n >> m >> k;
    for(int i=1;i<=m;i++)
    {
        cin >> ar[i];
    }
    lli c=0,ans=0;
    lli x=k;
    for(int i=1;i<=m;i++)
    {
        if(ar[i]<=k)
        {
            c++;
        }
        else
        {
            if(c!=0)
            {
                ans++;
                k+=c;
                c=0;
                i--;
            }
            else
            {
                lli p = ar[i]-k;
                lli q = ceil(double(p)/x);
                k += x*q;
                i--;
            }
        }
    }
    if(c!=0)
    {
        ans++;
    }
    cout << ans ;

}