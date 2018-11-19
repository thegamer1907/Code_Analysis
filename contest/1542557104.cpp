#include<cstdio>
#include<string>
int main()
{
    char a[3];
    scanf("%s",a);
    int t;
    scanf("%d",&t);
    char b[101][3];
    for(int i=0;i<t;i++)
    {
        scanf("%s",b[i]);
    }
    int f=0,q=0;
    for(int i=0;i<t;i++)
    {
        if(b[i][0]==a[0]&&b[i][1]==a[1])f=1;
        else if(b[i][1]==a[0])q=1;


    }
    for(int i=0;i<t;i++)
    {
        if(q==1&&b[i][0]==a[1])q=2;
    }
    if(f==1||q==2)
        printf("YES\n");
    else
        printf("NO\n");
}
