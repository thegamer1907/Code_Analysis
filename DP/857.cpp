#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,m=0,sum=0;
    cin>>n;
    vector<pair<int,int> > v(n);
    vector<int> a(n);
    for(i=0;i<n;i++)
    {
        cin>>x;
        if(x)
        a[i]=-1;
        else
        a[i]=1;
    }
    v[0]=make_pair(a[0],0);
    for(i=1;i<n;i++)
    {
        v[i].first=max(v[i-1].first+a[i],a[i]);
        if(v[i-1].first>0)
        v[i].second=v[i-1].second;
        else
        v[i].second=i;
        if(v[m].first<v[i].first)
        m=i;
    }
    if(v[m].first==-1)
    {
        cout<<n-1;
        return 0;
    }
    for(i=0;i<v[m].second;i++)
    if(a[i]==-1)
    sum++;
    for(i=m+1;i<n;i++)
    if(a[i]==-1)
    sum++;
    for(i=v[m].second;i<=m;i++)
    if(a[i]==1)
    sum++;
    cout<<sum;
}