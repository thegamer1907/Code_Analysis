#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,destination;
    cin>>n>>destination;
    bool vis[n+1]={0};
    vis[1]=true;
    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        if(vis[i])
            vis[x+i]=true;
    }
    if(vis[destination])
        cout <<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}