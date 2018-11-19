#include "bits/stdc++.h"
using namespace std;
int main()
{
    int x,n,k,flag=0,a[16];;
    scanf("%d%d",&n,&k);
    memset(a,0,sizeof(a));
    for(int i=1; i<=n; i++)
    {
        int state=0;
        for(int j=0; j<k; j++)
        {
            scanf("%d",&x);
            if(x)
                state |=(1<<j);
        }
        a[state]=1;
    }
    for(int i=0; i<16; i++)
    {
        for(int j=0; j<16; j++)
        {
            if(a[i]==0||a[j]==0) continue;
            if((i&j)==0)
            {
                flag=1;
                break;
            }
        }
        if(flag) break;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
