#include<bits/stdc++.h>
using namespace std;
int h[105];
int main()
{
    int i,g[105],b[105],n,m,p=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>b[i];
    cin>>m;
    for(i=0;i<m;i++)
        cin>>g[i];
    sort(b,b+n);
    for(i=0;i<m;i++)
        h[g[i]]++;
    for(i=0;i<n;i++)
    {
        if(h[b[i]-1]>0)
        {
            p++;
            h[b[i]-1]--;
        }
        else if(h[b[i]]>0)
        {
            p++;
            h[b[i]]--;
        }
        else if(h[b[i]+1]>0)
        {
            p++;
            h[b[i]+1]--;
        }
    }
    cout<<p<<endl;
    return 0;
}
