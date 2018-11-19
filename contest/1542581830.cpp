#include<bits/stdc++.h>
using namespace std;
bool vis[100];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int bb=0;
        for(int j=0;j<k;j++)
        {
            int in;
            cin>>in;
            bb=bb*2+in;
            //cout<<bb<<endl;
        }
        vis[bb]=true;
    }
    if(vis[0])
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(k==1)cout<<"NO"<<endl;
    else if(k==2)
    {
        if(vis[1]&&vis[2])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else if(k==3)
    {
        for(int i=0;i<=6;i++)
        {
            for(int j=0;j<=6;j++)
            {
                if((i&j)==0&&vis[i]&&vis[j])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        cout<<"NO"<<endl;
        return 0;
    }
    else if(k==4)
    {
        for(int i=0;i<=15;i++)
        {
            for(int j=0;j<=15;j++)
            {
                if((i&j)==0&&vis[i]&&vis[j])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        cout<<"NO"<<endl;
        return 0;
    }
    return 0;
}