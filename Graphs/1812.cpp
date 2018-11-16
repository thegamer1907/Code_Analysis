#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100],b[100],x=0;
    bool aa[100],bb[100];
    memset(aa,0,sizeof(aa));
    memset(bb,0,sizeof(bb));
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++) cin>>b[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>=a[j]) swap(a[i],a[j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(b[i]>=b[j]) swap(b[i],b[j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(abs(a[i]-b[j])<=1&&bb[j]==false)
            {
                x++;
                aa[i]=true;
                bb[j]=true;
                break;
            }
        }
    }
    cout<<x;
}
