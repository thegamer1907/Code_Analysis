#include <stdio.h>
using namespace std;
char s[10055],w[40],a[40],b[40];
long long p;
long long cal(long long m)
{
    long long sum=0;
    long long n;
    for(int i=0; i<3; i++)
    {
        n=w[i]*m-a[i];
        if(n>0)
            sum+=b[i]*n;
    }
    return sum;
}
long long find()
{
    long long l=0,r=1e12+200,m;
   // printf("%I64d\n",r);
    while(l+1<r)
    {
        m=(l+r)/2;
        if(cal(m)<=p)
            l=m;
        else
            r=m;
    }
    return l;
}
int main()
{
    int i,j;
    scanf("%s",s);
    scanf("%d%d%d",&a[0],&a[1],&a[2]);

    scanf("%d%d%d",&b[0],&b[1],&b[2]);
    scanf("%I64d",&p);
    for(i=0; s[i]; i++)
    {
        if(s[i]=='B')
            w[0]++;
        else if(s[i]=='S')
            w[1]++;
        else
            w[2]++;
    }
    printf("%I64d\n",find());
    return 0;
}
