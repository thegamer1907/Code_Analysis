#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    bool a[n+1];
    vector<int> b;
    b.push_back(0);
    for(int i=1;i<n+1;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            b.push_back(i);
    }
    ll range=0;
    ll low=-1,high=-1;
    for(int i=1;i<b.size();i++)
    {
        int l,r;
        l=b[i-1]+1;
        r=n;
        if(i+k<b.size())
            r=b[i+k]-1;
        
        if(range<r-l+1)
        {
            range=r-l+1;
            low=l;
            high=r;
        }
    }
    //cout<<low<<" "<<high<<endl;
    if(low!=-1 && high!=-1)
    {
        for(int i=low;i<=high;i++)
            a[i]=1;
    }
    ll final_range=0,x1=0;
    for(int i=1;i<n+1;i++)
    {
        if(a[i]!=0)
        {
            x1++;
        }
        else
        {
            if(final_range<x1)
                final_range=x1;
            x1=0;
        }
    }
    if(final_range<x1)
        final_range=x1;
    cout<<final_range<<endl;
    for(int i=1;i<n+1;i++)
        cout<<a[i]<<" ";
}