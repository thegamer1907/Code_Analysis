#include<bits/stdc++.h>
using namespace std;
int b[1000006],c[1000006],a[100005],d[100005];
int main()
{
    int n,q,s=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        b[s]++;
    }
    s=1;
    for(int i=0;i<1000005;i++)
    {
        s+=b[i];
        c[i]=s;
        //cout<<c[i]<<endl;
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>d[i];
        if(b[d[i]]==1) cout<<c[d[i]]-1<<endl;
        else cout<<c[d[i]]<<endl;
    }
    return 0;
}
