#include<bits/stdc++.h>
using  namespace std;
#define ll long long
int flag1[110],zz[20];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        int x,sum=0;
        for(int j=k-1; j>=0; j--)
        {
            scanf("%d",&x);
            sum=sum<<1|x;
        }
        flag1[sum]=1;
    }
    bool flag=0;
    if(flag1[0]) flag=1;
    for(int i=1; i<16&&!flag; i++)
        for(int j=1; j<16&&!flag; j++)
        {
            memset(zz,0,sizeof(zz));
            if(i!=j&&flag1[i]&&flag1[j])
            {
                int x1=i,x2=j,kk=0;
                for(; x1;)
                {
                    zz[kk++]+=x1&1;
                    x1>>=1;
                }
                kk=0;
                for(; x2;)
                {
                    zz[kk++]+=x2&1;
                    x2>>=1;
                }
                if(zz[0]<2&&zz[1]<2&&zz[2]<2&&zz[3]<2)
                {
                    flag=1;
                }
            }
        }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
