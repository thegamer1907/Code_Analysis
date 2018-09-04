#include<stdio.h>
#include<string.h>
using namespace std;
long long a[3],x[3],sum,c[3];
char s[110];
int min(long long h[3])
{
    long long num;
    num=h[0];
    int i;
    for(i=1;i<3;i++)
    {
        if(num>h[i])
        {
            num=h[i];
        }
    }
    for(i=0;i<3;i++)
    {
        x[i]=x[i]-a[i]*num;
    }
    return num;
}
int main()
{
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
    	if(s[i]=='B')a[0]++;
    	else if(s[i]=='S')a[1]++;
    	else a[2]++;
    }
    scanf("%lld%lld%lld",&x[0],&x[1],&x[2]);
    scanf("%lld%lld%lld",&c[0],&c[1],&c[2]);
    scanf("%lld",&sum);
    long long out=0,m[3]={0},e;
    for(int i=0;i<3;i++)if(a[i]!=0)m[i]=x[i]/a[i];
    out=min(m);
    long long s=sum;
    sum+=x[0]*c[0]+x[1]*c[1]+x[2]*c[2];
    e=sum/(c[0]*a[0]+c[1]*a[1]+c[2]*a[2]);
    for(;;)
    {
        m[0]=e*a[0]-x[0];
        if(m[0]<0)m[0]=0;
        m[1]=e*a[1]-x[1];
        if(m[1]<0)m[1]=0;
        m[2]=e*a[2]-x[2];
        if(m[2]<0)m[2]=0;
        if((m[0]*c[0]+m[1]*c[1]+m[2]*c[2])>s)e--;
        else break;
    }
    out+=e;
    printf("%lld\n",out);
    return 0;
}
