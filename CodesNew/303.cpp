#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,i,j,k,c=0,sm=0,t=0,ans=0;
    cin>>n>>m;
    int a[n+2],b[n+2];
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<n; i++)
    {

        sm+=a[i];
        if(sm>m)
        {
            sm-=a[t];
            ++t;
        }
        else
        {
            ++c;
            if(c<ans)
                ans = c;
        }
        if(c<0)
            c = 0;
        //cout<<sm<<" ";
    }

        if(ans<c)
            ans = c;


   cout<<ans<<endl;

    return 0;
}