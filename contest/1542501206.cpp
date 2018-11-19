#include <bits/stdc++.h>
#include <cstring>
using namespace std;
const int INF=0x3f3f3f3f;
const int MOD=1e9+7;

int vis[(1<<4)+5];

int main()
{
    int n,k,x;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        int num=0;
        for(int j=0;j<k;j++)
        {
            scanf("%d",&x);
            num+=(1<<j)*x;
        }
        vis[num]=1;
    }
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
        {
            if(!vis[i]||!vis[j])
                continue;
            if((i&j)==0)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
