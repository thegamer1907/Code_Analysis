#include <iostream>
#include<cstring>
using namespace std;

int n,k,a[100010][5],cho[110],ans,tot[10],f[5][5];

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=k;j++)
        {
            scanf("%d",&a[i][j]);
            tot[j]+=a[i][j];
        }
    for(int i=1;i<=k;i++)
        if(tot[i]==n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    if(k==2)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else if(k==3)
    {
        for(int i=1;i<=n;i++)
        {
            int nownum=0;
            for(int j=1;j<=k;j++)
                nownum+=a[i][j];
            if(nownum<2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            int nownum=0;
            for(int j=1;j<=k;j++)
                nownum+=a[i][j];
            if(nownum<2)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        for(int ft=1;ft<=k;ft++)
        {
            for(int st=1;st<=k;st++)
            {
                if(ft==st)
                    continue;
                for(int i=1;i<=n;i++)
                    if(a[i][ft]==0&&a[i][st]==0)
                        f[ft][st]=1;
            }
        }
        for(int i=1;i<=k;i++)
        {
            for(int j=1;j<=k;j++)
            {
                if(i==j)
                    continue;
                if(f[i][j]==1)
                {
                    for(int ii=1;ii<=k;ii++)
                        for(int jj=1;jj<=k;jj++)
                        {
                            if(ii==jj||ii==i||jj==j||ii==j||jj==i||i==j)
                                continue;
                            if(f[i][j]+f[ii][jj]==2)
                            {
                                cout<<"YES"<<endl;
                                return 0;
                            }
                        }
                }
            }
        }
    }
    cout<<"NO"<<endl;
}