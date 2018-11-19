#include<bits/stdc++.h>
using namespace std;
int vis[50];
int main()
{
    cin.tie(0);ios_base::sync_with_stdio(false);
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int c=0,f;
        for(int j=0;j<k;j++)
        {
            cin>>f;
            c=c*2+f;
        }
        vis[c]=1;
        for(int i=0;i<16;i++)if(vis[i]&&((i&c)==0)){cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;
return 0;
}