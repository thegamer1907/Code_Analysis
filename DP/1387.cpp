#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[110],l,r,i,j,k=0,mx=0,t=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==1)
        {
            t++;
        }
    }

    for(l=1;l<=n;l++)
    {
        for(r=l;r<=n;r++)
        {
            k=0;
            for(i=l;i<=r;i++)
            {
                if(a[i]==0)
                {
                    k++;
                }
            }
            mx=max(mx,t-r+l-1+k+k);
        }
    }
    cout<<mx;
}
