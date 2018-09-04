#include<string>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
const int N=1e6+50;
int nxt[N];
char str[N];
int sum[N];
bool ok[N];
void getnxt(int n,char *a)
{
    int i,j;
    for(nxt[0]=j=-1,i=1;i<n;nxt[i++]=j)
    {
        while(~j&&a[j+1]!=a[i])j=nxt[j];
        if(a[j+1]==a[i])j++;
    }
}
int main()
{
    int i,j;
    scanf("%s",str);
    int len=strlen(str);
    getnxt(len,str);
    memset(sum,0,sizeof(sum));
    memset(ok,0,sizeof(ok));
    ok[len-1]=1;
    for(i=len-1;i>=0;i--)
    {
        sum[i]++;
        if(nxt[i]!=-1)
        {
            sum[nxt[i]]+=sum[i];
            ok[nxt[i]]|=ok[i];
        }
    }
    //for(i=0;i<len;i++)printf("i:%d nxt:%d sum:%d\n",i,nxt[i],sum[i]);
    for(i=len-1;i>=0;i--)
    {
        if(sum[i]>=3&&ok[i])
        {
            for(j=0;j<=i;j++)printf("%c",str[j]);
            printf("\n");
            return 0;
        }
    }
    printf("Just a legend\n");
    return 0;
}
