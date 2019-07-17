#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e5+1;
int n,m,k,p[N],i,j,pos,dem,re;

main()
{
    cin>>n>>m>>k;
    for(i=1;i<=m;i++) cin>>p[i];
    sort(p+1,p+m+1);
    pos=k;
    i=1;
    while(i<=m)
    {
        int v=upper_bound(p+1,p+m+1,pos)-p-1;
        if(v<i)
        {
            int d=(p[i]-pos)/k;
            if((p[i]-pos)%k!=0) d++;
            pos+=d*k;
            v=upper_bound(p+1,p+m+1,pos)-p-1;
        }
        pos+=(v-i+1);
        i=(v+1);
        dem++;
    }
    cout<<dem;
}