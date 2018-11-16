#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],c=0,t=0,r=0,maxx=-999999;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    if(a[i]==0)
            t++;
        else
        {
            t--;
            r++;
        }
        if(t>maxx)
            maxx=t;
        if(t<0)
            t=0;
            //cout<<t<<endl;
    }
    cout<<maxx+r;
}
