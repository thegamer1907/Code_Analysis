#include<cstdio>
#include<iostream>
#define maxn 100005
using namespace std;
long long n,ave,maxa=0;
long long a[maxn];
long long sum=0;
int main()
{
    scanf("%I64d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%I64d",&a[i]);
        sum+=a[i];
        if(a[i]>maxa)maxa=a[i];
    }
    if(sum%(n-1))ave=sum/(n-1)+1;
    else ave=sum/(n-1);
    printf("%I64d",max(maxa,ave));
    return 0;
}