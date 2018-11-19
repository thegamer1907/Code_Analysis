#include<bits/stdc++.h>
using namespace std;
bool vis[1000];
int main()
{

    int n,k,a;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {

        int tmp=1;
        int t=0;
        for(int j=1;j<=k;j++)
        {
            cin>>a;
            t+=tmp*a;
            tmp=tmp*2;

        }
        vis[t]=1;
    }
    if(vis[0])
    {

        cout<<"YES"<<endl;
        return 0;
    }
    int m=pow(2,k);
    for(int i=1;i<m;i++)
    {
        if(vis[i])
        {
            for(int j=i+1;j<m;j++)
            {
                if(vis[j])
                {
                  int t=i&j;
                  if(t==0)
                  {

                      cout<<"YES"<<endl;
                      return 0;
                  }
                }
            }
        }
    }
    cout<<"NO"<<endl;
}

