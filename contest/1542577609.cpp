#ifdef WSM
#include <bits:stdc++.h>
#else
#include <bits/stdc++.h>
#endif
#define mem(a) memset(a,0,sizeof(a));
using namespace std;
typedef long long ll;
const int N=1e5+7;
int vis[27]={0};
int a[7];
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<k;j++)
            scanf("%d",&a[j]);
        int ans=0,c=1;
        for(int j=k-1;j>=0;j--)
        {
            ans+=c*a[j];
            c*=2;
        }
        vis[ans]=1;
    }
    if(vis[0]) {puts("YES");return 0;}
    int flag=0;
    for(int i=0;i<16;i++)
    {
        for(int j=0;j<16;j++)
            if((i&j)==0&&vis[i]&&vis[j]) {flag=1;break;}
        if(flag) break;
    }
    if(flag) puts("YES");
    else puts("NO");
}
