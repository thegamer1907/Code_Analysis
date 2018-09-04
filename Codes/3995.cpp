#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
const int inf=0x3f3f3f3f;
int a[N],b[N];
int nex[N];
int main()
{
    int n,m;
    int t,l,r;
    int x;
    while(cin>>n>>m)
    {
        memset(b,0,sizeof(b));
        memset(a,0,sizeof(a));
        memset(nex,0,sizeof(nex));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                cin>>x;
                if(a[j]<=x)
                {
                    b[j]+=1;
                    a[j]=x;
                    if(nex[i]<b[j])
                        nex[i]=b[j];
                }
                else
                {
                    a[j]=x;
                    b[j]=1;
                    if(nex[i]==0)
                        nex[i]=1;
                }

            }
         //   for(int j=1;j<=m;j++)
          //      cout<<b[j]<<"*";
         //   cout<<endl;
        }
        cin>>t;
       // for(int i=1;i<=n;i++)
        //    cout<<nex[i]<<endl;
        while(t--)
        {
            cin>>l>>r;
            if(nex[r]>r-l)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}
