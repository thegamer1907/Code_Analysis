#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<string>
using namespace std;
int h[20]={
    0
};
int main()
{
    int a,b;
    int i,j;
    int n,k;
    cin>>n>>k;
    for (i=1;i<=n;i++)
    {
        int tmp=0;
        for (j=1;j<=k;j++)
        {
            cin>>a;
            tmp=tmp*2+a;
        }
        h[tmp]=1;
    }
    for (i=0;i<(1<<k);i++)
    {
        if (h[i])
        {
            for (j=0;j<(1<<k);j++)
            {
                //cout<<"I"<<i<<' '<<j<<endl;
                if (h[j]&&((i&j)==0))
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"NO"<<endl;

}
