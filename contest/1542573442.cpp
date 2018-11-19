#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int ans[200],n,k;
int main()
{
    int i,j,x;
    while(~scanf("%d %d",&n,&k))
    {
         memset(ans,0,sizeof(ans));
         for(i=1;i<=n;i++)
         {
             int cnt=0;
             for(j=1;j<=k;j++)
             {
                 scanf("%d",&x);
                  cnt+=(1<<j-1)*x;
             }
             ans[cnt]=1;
         }
         int flag=0;
         for(i=0;i<16;i++)
            for(j=0;j<16;j++)
         {
             if((i&j)==0&&ans[i]&&ans[j]) flag=1;
         }
         if(flag)
            cout<<"YES"<<endl;
         else
            cout<<"NO"<<endl;
    }
    return 0;
}
