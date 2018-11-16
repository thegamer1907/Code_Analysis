#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
#define rep(i,j,k) for(int i=j;i<=k;++i)
#define MAXN 10005
int f[MAXN],ff[MAXN];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        rep(i,2,n)
            scanf("%d",&f[i]);
        int sum=0;
        rep(i,1,n)
        {
            scanf("%d",&ff[i]);
            if(i==1||ff[i]!=ff[f[i]])
                sum++;
        }
        printf("%d\n",sum);
    }
}
