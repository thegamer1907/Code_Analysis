#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,a,maxsofar=0,maxend=0,st=0,en=0,c=0,sum=0,be=0;
    cin>>n;
    int v[n];
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
            v[i]=-1;
        else
            v[i]=1;
    }
    for(i=0;i<n;i++)
    {
        sum+=v[i];
        maxend+=v[i];
        if(maxsofar<=maxend)
        {
            maxsofar=maxend;
            st=be;
            en=i;
        }
        if(maxend<0)
        {
            maxend=0;

            be=i+1;
        }
    }


    if(sum==-n)
    {
        cout<<n-1;
        return 0;
    }

    for(i=st;i<=en;i++)
    {
        if(v[i]==1)
            v[i]=-1;
        else
            v[i]=1;
    }
    for(i=0;i<n;i++)
    {
        if(v[i]==-1)
            c++;
    }
    cout<<c;

}

