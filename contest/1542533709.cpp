#include <cstdio>  
#include <map>  
#include <cstring>  
#include <algorithm>  
using namespace std;  
  
typedef long long ll;  
const int maxn = 100005;  
const ll mod = 1e9+7;  
const int INF = 0x3f3f3f3f;  
const double eps = 1e-9;  
  
int n,k;  
int vis[(1<<4)+5];  
  
int main()  
{  
    int x;  
    while(~scanf("%d%d",&n,&k))  
    {  
        memset(vis,0,sizeof vis);  
        for(int i=1; i<=n; i++)  
        {  
            int state=0;  
            for(int j=1; j<=k; j++)  
            {  
                scanf("%d",&x);  
                state+=(1<<(j-1))*x;  
            }  
            vis[state]=1;  
        }  
        int flag=0;  
        for(int i=0; i<16; i++)  
        {  
            for(int j=0; j<16; j++)  
            {  
                if(vis[i]==0||vis[j]==0) continue;  
                if((i&j)==0)  
                {  
                    flag=1;  
                    break;  
                }  
            }  
            if(flag) break;  
        }  
        if(flag) puts("YES");  
        else puts("NO");  
    }  
}  