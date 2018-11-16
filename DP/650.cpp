#include<stdio.h>
#include<string.h>
#define M 100005
char s[M];
int a[M];
int main()
{
	int nq;
    scanf("%s",s);
    scanf("%d",&nq);
    int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]==s[i+1])
            a[i+1]+=a[i]+1;
        else
            a[i+1]=a[i];
    }
    int aa,b;
    for(int i=1;i<=nq;i++)
    {
        scanf("%d%d",&aa,&b);
        printf("%d\n",a[b-1]-a[aa-1]);
    }
    return 0;
}