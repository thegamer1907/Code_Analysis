#include <iostream>
#include <stdio.h>
using namespace std;
int n, m, f[10000007], nrap[10000007];
bool ciur[10000007];
void eratos()
{
    int i, j;
    for(i=2; i<=10000000; i++)
        if(!ciur[i]) ///daca i este prim
       {
            for(j=i; j<=10000000; j+=i)
                {
                    ciur[j]=1;
                    f[i]+=nrap[j];
                }
       }
}
int main()
{
    int i, x, l, r;
    std::ios::sync_with_stdio(false);
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x;
        nrap[x]++;
    }
    eratos();
    for(i=2; i<=10000000; i++)
        f[i]+=f[i-1];
    cin>>m;
    for(i=1; i<=m; i++)
    {
        cin>>l>>r;
        if(r> 10000000) r=10000000;
        if(l> 10000000) l=10000000;
        cout<<f[r]- f[l-1]<<"\n";
    }
    return 0;
}




