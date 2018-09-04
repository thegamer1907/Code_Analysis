#include<stdio.h>
long long f[105];
long long dfs(long long n,long long x)
{
    if(x==f[n])
        return n;
    else if(x>f[n])
        return dfs(n-1,x-f[n]);
    else
        return dfs(n-1,x);
}
int main()
{
    long long n,x;
    long long i;
    f[1]=1;
    for(i=2;i<=55;i++)
        f[i]=f[i-1]*2;
    while(scanf("%I64d %I64d",&n,&x)!=EOF)
    {
        printf("%I64d\n",dfs(n,x));
    }
}
