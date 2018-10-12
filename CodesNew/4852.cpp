/*   You have lost, my dear   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
using namespace std;
char c[200002];
char c2[200002];
bool scos[200002];
int v[200002],n,m;
bool bun(int cc)
{
    memset(scos,0,sizeof(scos));
    for(int i=1;i<=cc;++i)
        scos[v[i]]=1;
    int px=0;
    for(int i=1;i<=n;++i)
        if(!scos[i])
        {
            if(c2[px+1]==c[i])
                ++px;
            if(px==m)
                return 1;
        }
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>(c+1);
    cin>>(c2+1);
    n=strlen(c+1);
    m=strlen(c2+1);
    for(int i=1;i<=n;++i)
        cin>>v[i];
    int b=1;
    int e=n;
    int sol=0;
    while(b<=e)
    {
        int mid=(b+e)/2;
        if(bun(mid))
        {
            sol=mid;
            b=mid+1;
        }
        else
            e=mid-1;
    }
    cout<<sol;
    return 0;
}
