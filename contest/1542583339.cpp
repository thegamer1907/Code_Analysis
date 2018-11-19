#include<bits/stdc++.h>
using namespace std;
int a[20];
int b[5],c[5];
int main()
{
    int n,k,x,i,j,l,res;
    bool flag;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        res=0;
        for(j=k-1;j>=0;j--)
        {
            scanf("%d",&x);
            res+=x*(1<<j);
        }
        a[res]++;
    }
    if (a[0])
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=0;i<(1<<k);i++)
        for(j=0;j<(1<<k);j++)
        {
            if (a[i] && a[j])
            {
                flag=true;
                for(l=0;l<k;l++)
                {
                    if (i & (1<<l)) b[l]=1;
                    else b[l]=0;
                    if (j & (1<<l)) c[l]=1;
                    else c[l]=0;
                    if (b[l] && c[l]) flag=false;
                }
                if (flag)
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    cout<<"NO"<<endl;
    return 0;
}
