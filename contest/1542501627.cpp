#include <bits/stdc++.h>
using namespace std;
int vis[20];
int main()
{
    int n,k;
    cin>>n>>k;
    memset(vis,0,sizeof(vis));
    for(int i=0; i<n; i++)
    {
        int ans=0;
        for(int j=0; j<k; j++)
        {
            int a;
            cin>>a;
            ans=ans*2+a;
        }
        vis[ans]++;
    }
    for(int i=0; i<(1<<k); i++)
        for(int j=0; j<(1<<k); j++)
            if(vis[i]>0&&vis[j]>0&&((i&j)==0))
            {
                cout<<"YES"<<endl;
                return 0;
            }
    cout<<"NO"<<endl;
    return 0;
}