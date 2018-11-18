#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<queue>
using namespace std;
int f[110];
int main()
{
    int i,j,k,l,m,n;
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    a*=5,d*=5,e*=5;
    a%=60;
    d%=60;
    e%=60;
    f[a]++;
    f[b]++;
    f[c]++;
    if(d>e) swap(d,e);
    int ans=0;
    for(i=d;i<e;i++)ans+=f[i];
    if(ans%3==0)puts("YES");
    else puts("NO");
    return 0;
}